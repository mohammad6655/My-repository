// List class
#include "list.h"
#include <iostream>
#include <conio.h>

int main()
{
    List<int> x;
    int choice, a;

    std::cout << "1 : insert at beginning \n"
              << " 2 : insert at end \n"
              << " 3 : delete from beginning \n"
              << " 4 : delete from end \n"
              << " 5 : exit \n";

    do
    {
        std::cout << "\nenter(1 to 5) : ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Enter: ";
            std::cin >> a;
            x.insertAtFront(a);
            x.print();
            break;

        case 2:
            std::cout << "Enter: ";
            std::cin >> a;
            x.insertAtBack(a);
            x.print();
            break;

        case 3:
            if (x.removeFromFront(a))
                std::cout << a << " removed. \n";
            x.print();
            break;

        case 4:
            if (x.removeFromBack(a))
                std::cout << a << " removed. \n";
            x.print();
            break;
        }
    } while (choice != 5);

    getch();
}
