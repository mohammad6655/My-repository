#include <iostream>
#include <conio.h>
#include <iomanip>

class Time
{
public:
    Time();
    void setTime(int, int, int);
    void printUniversal();
    void PrintStandard();

private:
    int hour;
    int minute;
    int second;
};

Time::Time()
{
    hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}
void Time::printUniversal()
{
    std::cout << std::setfill('0') << std::setw(2) << hour << ":"
              << std::setw(2) << minute << ":"
              << std::setw(2) << second;
}
void Time::PrintStandard()
{
    std::cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << std::setfill('0') << std::setw(2) << minute << ":"
              << std::setw(2) << second << (hour < 12 ? " Am" : " PM");
}
int main()
{
    Time t;
    std::cout << "The initial universal time is ";
    t.printUniversal(); // 00:00:00

    std::cout << "\nThe initial standard time is ";
    t.PrintStandard(); // 12:00:00 AM

    t.setTime(13, 27, 6); // change time

    std::cout << "\n\nUniversal time after setTime is ";
    t.printUniversal(); // 13:27:06

    std::cout << "\nStandard time after setTime is ";
    t.PrintStandard(); // 1:27:06PM

    t.setTime(99, 99, 99);

    std::cout << "\n\nAfter attempting invalid settings: "
              << "\nUniversal time: ";
    t.printUniversal(); // 00:00:00
    std::cout << "\nStandard time : ";
    t.PrintStandard(); // 12:00:00 AM

    getch();
}