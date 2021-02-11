// task11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

int main()
{
    setlocale(LC_ALL, "Rus");
    float R = 10.0, L = 15.0;
    float H, S1, S2, V;
    H = sqrt(pow(L, 2) - pow(R, 2));
    printf("Высота конуса, %.3f\n", H);
    S1 = PI * R * L;
    printf("Площадь боковой поверхности конуса, %.3f\n", S1);
    S2 = (PI * R * L) + (PI * pow(R, 2));
    printf("Площадь полной поверхности, %.3f\n", S2);
    V = (1 * PI * H * pow(R, 2))/3;
    printf("Объем конуса, %.3f\n", V);

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
