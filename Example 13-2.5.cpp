// Example 13-2.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int People, amount; //Количество посетителей
    int Age;
    int mAge, nAge, SRAge;
    amount = 1;
    Age = 1;
    mAge = 0;
    nAge = 100;
    SRAge = 1;
    printf("\t\tСколько человек посетило медцентр за день? ");
    scanf_s(" %d", &People);
	//scanf_s(" %d", &People);
    printf("\n\t\tЗа день медцентр посетило %d человек.", People);
    printf("\n\t\tПожалуйста, введите возраст каждого посетителя.\n");
        for (amount = 1; amount <= People; amount++) {
            printf("\n\n\t\tВведите возраст посетителя %d : ", amount);
            scanf_s("\t\t\t %d", &Age);
            SRAge += Age / People;
            if (Age > mAge) {
                mAge = Age;
            }
            if (Age < nAge) {
                nAge = Age;
            }
        }
        printf("\n\nВозраст самого старшего посетителя состовляет %d ", mAge);
        printf("\tВозраст самого младшего посетителя состовляет %d \n\n\n", nAge);
        //SRAge = (Age+Age+Age) / People;
        printf("\t\tСредний возраст посетителей составляет %d \n\n\n", SRAge);
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
