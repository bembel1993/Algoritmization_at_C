// 1. Вывод количества байт.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;
struct Weight {
    char name;
    int number;
    float fraction; 
    double dfraction;
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Weight dataType;
    cout << "Вес для типа Char     - " << sizeof(dataType.name) << endl;
    cout << "Вес для типа Int      - " << sizeof(dataType.number) << endl;
    cout << "Вес для типа Float    - " << sizeof(dataType.fraction) << endl;
    cout << "Вес для типа Double   - " << sizeof(dataType.dfraction) << endl;
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
