﻿// task5-2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A; int B;
    int C; 
    int F;
    F = 1;
    printf("\tВведите два числа: ");
    scanf_s(" %d %d", &A, &B);
    for (C = A; C <= B; C++) {
        
        F *= C;
        printf("\n\t %d * ", C);
        printf(" = %d\n", F);
        
    }
    printf("\n\n\tФакториал равен %d\n", F);
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
