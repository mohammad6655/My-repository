#include <iostream>

int main()
{
    std::cout << "Pick a number from 1 to 8." << '\n';
    char answer;
    std::cout << "Is it less than 5? (y|n): ";
    std::cin >> answer;
    if (answer == 'y') // 1<= n <=4
    {
        std::cout << "Is it less than 3? (y|n): ";
        std::cin >> answer;
        if (answer == 'y') // 1 <= n <=2
        {
            std::cout << "Is it less than 2? (y|n): ";
            std::cin >> answer;
            if (answer == 'y')
                std::cout << "Your number is 1." << '\n';
            else
                std::cout << "Your number is 2." << '\n';
        }
        else // 3<=n<=4
        {
            std::cout << "Is it less than4? (y|n): ";
            std::cin >> answer;
            if (answer == 'y')
                std::cout << "your number is 3." << '\n';
            else
                std::cout << "Your number is 4." << '\n';
        }
    }
    else // 5<= n<= 8
    {
        std::cout << "Is it less than 7? (y|n): ";
        std::cin >> answer;
        if (answer == 'y')
        {
            std::cout << "Is it less than 6? (y|n): ";
            std::cin >> answer;
            if (answer == 'y')
                std::cout << "Your number is 5." << '\n';
            else
                std::cout << "Your number is 6." << '\n';
        }
        else // 7 <= n <= 8
        {
            std::cout << "Is it less than 8? (y n): ";
            std::cin >> answer;
            if (answer == 'y')
                std::cout << "Your number is 7." << '\n';
            else
                std::cout << "Your number is 8." << '\n';
        }
    }
    return 0;
}