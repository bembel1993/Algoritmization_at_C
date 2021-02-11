// task2.4-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <math.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A; int B;
    int C;
    int R;
    
    printf("Введите два целых числа:");
    scanf_s(" %d %d", &A, &B); 
    printf(" %4d %7d\n", A, B);
    //(0 < A < B)   
    for (int C = A; C <= B; C++) {
        //C = pow (C, 2);
        R = C * C;
        printf("%5d * %5d = %d\n", C, C, R);
    }
    
   
    
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
