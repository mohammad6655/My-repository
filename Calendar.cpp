#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int menu();
void gotoxy(int x, int y);
int main()
{
    int i, start, day, g, m29 = 0;
    day = menu();
    if (day < 1)
        return 0;
    else if (day > 7)
    {
        cout << "Error This Number!!";
        return 0;
    }
    start = day - 1;
    for (g = 1; g <= 12; g++)
    {
        cout << "\n----------month" << g << "----------------------";
        cout << "\nSat    Sun     Mon     Tus     Wen     Thr     Fri";
        if (g == 7)
            m29 = 1;
        if (g == 12)
            m29 = 2;
        day = start;
        cout << "\n";
        for (i = 1; i <= 31 + day - m29; i++)
        {
            start++;
            if (i <= day)
                cout << "\t";
            else if (i % 7 == 1)
            {
                start = 1;
                cout << "\n"
                     << i - day << "\t";
            }
            else
                cout << i - day << "\t";
        }
        cout << "\n\n";
    }
    cout << "            <<  END !!  >>      ";
    return 0;
}
int menu()
{
    int day;
    gotoxy(26, 2);
    cout << "|-----------------------|";
    gotoxy(26, 3);
    cout << "|     Taghvim saz !!    |";
    gotoxy(26, 4);
    cout << "|-----------------------|";
    gotoxy(26, 5);
    cout << "|  Saturday     =      1|";
    gotoxy(26, 6);
    cout << "|-----------------------|";
    gotoxy(26, 7);
    cout << "|  Sunday       =      2|";
    gotoxy(26, 8);
    cout << "|-----------------------|";
    gotoxy(26, 9);
    cout << "|  Monday       =      3|";
    gotoxy(26, 10);
    cout << "|-----------------------|";
    gotoxy(26, 11);
    cout << "|  Tuesday      =      4|";
    gotoxy(26, 12);
    cout << "|-----------------------|";
    gotoxy(26, 13);
    cout << "|  Wednesday    =      5|";
    gotoxy(26, 14);
    cout << "|-----------------------|";
    gotoxy(26, 15);
    cout << "|  Thursday     =      6|";
    gotoxy(26, 16);
    cout << "|-----------------------|";
    gotoxy(26, 17);
    cout << "|  Friday       =      7|";
    gotoxy(26, 18);
    cout << "|-----------------------|";
    gotoxy(26, 19);
    cout << "|  Exit         =      0|";
    gotoxy(26, 20);
    cout << "|-----------------------|";
    gotoxy(26, 21);
    cout << "|  Enter Number =     []|";
    gotoxy(26, 22);
    cout << "|-----------------------|";
    gotoxy(26, 21);
    cin >> day;

    return day;
}

void gotoxy(int x, int y)
{
    static HANDLE h = NULL;
    if (!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = {x, y};
    SetConsoleCursorPosition(h, c);
}