#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
class Array
{
private:
    int *values;
    size_t size;

public:
    Array(size_t size)
    {
        values = new int[size];
        this->size = size;
    }

    ~Array()
    {
        delete[] values;
    }
    int &operator[](size_t index)
    {
        if (index >= size)
            throw invalid_argument("index is invalid");
        return values[index];
    }
};

int main()
{
    Array array{10};
    array[0] = 12;
    std::cout << array[0];

    getch();
}