// 8. Time - hours, minutes, seconds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define DELAY 128000
struct time {
    int hours;
    int minutes;
    int seconds;
};
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    time t1, * systimePtr;
    systimePtr = &t1;
    printf("Введите часы: ");
    scanf_s("%d", t1.hours);
    printf("Введите минуты: ");
    scanf_s("%d", t1.minutes);
    printf("Введите секунды: ");
    scanf_s("%d", t1.seconds);
   // t1.hours = 0;
   // t1.minutes = 0;
   // t1.seconds = 0;
   // long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    for (;;) {
        systimePtr->seconds++;
        if (systimePtr->seconds == 60) {
            systimePtr->seconds = 0;
            systimePtr->minutes++;
        }
        if (systimePtr->minutes == 60) {
            systimePtr->minutes = 0;
            systimePtr->hours++;
        }
        if (systimePtr->hours == 24) systimePtr->hours = 0;
        long int t;
        for (t = 1; t < DELAY; ++t);
        printf("%02d:", systimePtr->hours);
        printf("%02d:", systimePtr->minutes);
        printf("%02d\n", systimePtr->seconds);
        if (_kbhit()) return 0;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
