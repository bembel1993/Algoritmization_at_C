// task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

int main()
{
    setlocale(LC_ALL, "Rus");
    float R = 12;
    float D, C, S;
    D = 2 * R;
    printf("Диаметр круга, %.2f\n", D);
    C = PI * D;
    printf("Длина окружности круга, %.2f\n", C);
    S = PI* pow(R, 2);
    printf("Площадь круга, %.2f\n", S);
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
