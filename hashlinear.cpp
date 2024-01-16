// Hash linear
#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define size 5

enum s
{
    EMPTY,
    DELETED,
    FULL
};

struct student
{
    int id;
    int grade;
};

struct Record
{
    struct student info;
    enum s status;
};

int hashFunc(int key)
{
    return (key % size);
}
int search(int key, struct Record HT[])
{
    int i, t, pos;
    t = hashFunc(key);
    pos = t;

    for (i = 1; i != size - 1; i++)
    {
        if (HT[pos].status == EMPTY)
            return -1;

        if (HT[pos].info.id == key)
            return pos;

        pos = (t + i) % size;
    }
    return -1;
}
void insert(struct student rec, struct Record HT[])
{
    int i, pos, t, key;

    key = rec.id;
    t = hashFunc(key);
    pos = t;

    for (i = 1; i != size - 1; i++)
    {
        if (HT[pos].status == EMPTY || HT[pos].status == DELETED)
        {
            HT[pos].info = rec;
            HT[pos].status = FULL;
            return;
        }
        if (HT[pos].info.id == key)
        {
            std::cout << "\nDuplicate Record cannot be Inserted\n";
            return;
        }
        pos = (t + i) % size;
    }
    std::cout << "\nHash Table Limit Exceeded\n";
}
void display(struct Record HT[])
{
    int i;
    std::cout << "\n--------------------------\n";
    std::cout << "Hash Table\n";

    for (i = 0; i < size; i++)
    {
        std::cout << "[" << i << "]"
                  << "\t";

        if (HT[i].status == FULL)
            std::cout << HT[i].info.id << "   " << HT[i].info.grade << '\n';
        else if (HT[i].status == 1)
            std::cout << "Deleted\n";
        else
            std::cout << "Empty\n";
    }
}
void delete_(int key, struct Record HT[])
{
    int pos = search(key, HT);
    if (pos == -1)
        std::cout << "\n Not Found\n";
    else
        HT[pos].status = DELETED;
}


int main()
{
    struct Record HT[size];
    struct student x;

    for (int i = 0; i <= size - 1; i++)
    {
        HT[i].status = EMPTY;
    }
    
    x.id=30;    x.grade=17;     insert(x,HT);
    x.id=18;    x.grade=19;     insert(x,HT);
    // x.id=24;    x.grade=12;     insert(x,HT);
    x.id=15;    x.grade=18;     insert(x,HT);
    x.id=11;    x.grade=10;     insert(x,HT);

    display(HT);

    delete_(15, HT);
    display(HT);

    int pos = search(18, HT);
    if (pos != -1)
        std::cout << "\n Postition: " << pos << '\n';
    else
        std::cout << "\n Not Found\n";

    getch();
}