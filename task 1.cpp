// task 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

int main()
{
    setlocale(LC_ALL, "Rus");
    int h=20, R=8;
    float S, V;
    S = 2 * PI * R * h;
    printf("������� ������� ����������� ��������, %.2f\n", S);
    S = 2 * PI * pow(R, 2) * h;
    printf("������� ������ �����������, %.2f\n", S);
    V = PI * pow(R, 2) * h;
    printf("����� ��������, %.2f\n", V);
    
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
