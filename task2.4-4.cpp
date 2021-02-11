// task2.4-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <windows.h>
#include <string.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //char StrA[15];
    char num1[5] = "Ин";
    char num2[8] = "форма";
    char num3[5] = "тика";   
    printf(" %s%s%s\n", num1, num2, num3);
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
