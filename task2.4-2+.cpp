// task2.4-2+.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int age;

    printf("Введите возраст: ");
    scanf_s(" %d", &age);

    
    
    if ((age == 1 || age == 21 || age == 31 || age == 41 || age == 51 || age == 61 || age == 71 || age == 81 || age == 91 || age == 101) &&  (age < 120)) {
        printf("Вам %d год.", age);
    }
    
    else if ((age >= 2 && age <= 4)|| (age >= 22 && age <= 24)|| (age >= 32 && age <= 34)|| (age >= 42 && age <= 44)||
        (age >= 52 && age <= 54)|| (age >= 62 && age <= 64)|| (age >= 72 && age <= 74)|| (age >= 82 && age <= 84)||
        (age >= 92 && age <= 94)|| (age >= 102 && age <= 104)) {
        printf("Вам %d года.", age);
    }

    else if (age >= 5 && age <= 120) {
        printf("Вам %d лет.", age);
    }

    else if (age > 120) {
        printf("Такого не может быть!");
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
