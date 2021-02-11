// task9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int X1, Y1;
    int X2, Y2;
    float D;
    
    printf("Координат точки X2,\n");
    scanf_s(" %d", &X2);
    printf("Координат точки X1,\n");
    scanf_s(" %d", &X1);
    printf("Координат точки Y2,\n");
    scanf_s(" %d", &Y2);
    printf("Координат точки Y1,\n");
    scanf_s(" %d", &Y1);
    D = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    printf("Расстояние между двумя точками, %.2f\n", D);
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
