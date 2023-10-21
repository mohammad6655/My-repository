#include <iostream>

using namespace std;

int main()
{
    int i, player1, player2, score1 = 0, score2 = 0;
    for (i = 1; i <= 5; i++)
    {
        cout << "Player 1 Please Enter 1:(scissors), 2:(stone) , 3:(paper): ";
        cin >> player1;
        cout << "Player 2 Please Enter 1:(scissors), 2:(stone) , 3:(paper): ";
        cin >> player2;
        if ((player1 == 1 && player2 == 3) || (player1 == 3 && player2 == 2) || (player1 == 2 && player2 == 1))
        {
            score1++;
        }
        else if ((player2 == 1 && player1 == 3) || (player2 == 3 && player1 == 2) || (player2 == 2 && player1 == 1))
        {
            score2++;
        }
    }
    cout << "\nScore for player 1 is: " << score1;
    cout << "\nScore for player 2 is: " << score2;
    return 0;
}