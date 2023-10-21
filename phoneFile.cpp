
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream phonefile("PHONE.TXT");
    long number;
    std::string name;
    std::cout << "Enter a number for each name. (0 for quit): ";
    for (;;)
    {
        std::cout << number;
        std::cin >> number;
        if (number == 0)
            break;
        phonefile << number << ' ';
        std::cout << "Name: ";
        std::cin >> name;
        phonefile << name << ' ';
        std::cout << std::endl;
    }
    return 0;
}