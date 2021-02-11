// task6-2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A, B;
    int C;
    char choice;
    
    do{
    printf("Введите два числа и результат их сложения.\n");
    scanf_s(" %d\t %d", &A, &B);
    scanf_s(" %d", &C);
    
        if (C == A + B) {
            printf(" %d + %d = %d - Результат посчитан верно\n", A, B, C);
        }
        else {
            printf(" Резултат введен не верно.");
        }
        printf("\nПродолжить?\n");
        scanf_s(" %c", &choice);
        if (toupper(choice) == 'n') choice = 'N';
    } while (choice!='N');
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
