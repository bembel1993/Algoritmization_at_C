// 6. День, месяц, год.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <windows.h>
#include <iostream>
using namespace std;
struct Date {
    int day;
    int month;
    int year;
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Date date;
    cout << endl;
    cout << " Введите день, месяц, год." << endl;
    cin >> date.day >> date.month >> date.year;
    cout << endl;
    cout << " Вы ввели следующие день, месяц, год: " << endl;
    cout << endl;
    cout << "  " << date.day << "/" << date.month << "/" << date.year;
    cout << endl;
    return 0;
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
