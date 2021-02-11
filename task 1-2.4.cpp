// task 1-2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    char choose;

    do {
        printf("Введите номер месяца ");
        scanf_s(" %d", &number);
        if (number == 1) {
            printf("Данному номеру соответствует месяц январь.\n");
        }
        //else if (number > 12) {
          //  printf("Неверный номер.");
        //}
        //printf("Введите номер месяца ");
        //scanf_s(" %d", &number);
        else if (number == 2) {
            printf("Данному номеру соответствует месяц февраль.\n");
        }
        // else if (number > 12) {
            // printf("Неверный номер.");
         //}
        if (number == 3) {
            printf("Данному номеру соответствует месяц март.\n");
        }
        //else if (number > 12) {
          //  printf("Неверный номер.");
        //}
        if (number == 4) {
            printf("Данному номеру соответствует месяц апрель.\n");
        }
        //else if (number > 12) {
          //  printf("Неверный номер.");
        //}
        if (number == 5) {
            printf("Данному номеру соответствует месяц май.\n");
        }
        //else if (number > 12) {
          //  printf("Неверный номер.");
        //}
        if (number == 6) {
            printf("Данному номеру соответствует месяц июнь.\n");
        }
        //else if (number > 12) {
          //  printf("Неверный номер.");
        //}
        if (number == 7) {
            printf("Данному номеру соответствует месяц июль.\n");
        }
        //else if (number > 12) {
         //   printf("Неверный номер.");
       // }
        if (number == 8) {
            printf("Данному номеру соответствует месяц август.\n");
        }
        // else if (number > 12) {
          //   printf("Неверный номер.");
         //}
        if (number == 9) {
            printf("Данному номеру соответствует месяц сентябрь.\n");
        }

        if (number == 10) {
            printf("Данному номеру соответствует месяц октябрь.\n");
        }

        if (number == 11) {
            printf("Данному номеру соответствует месяц ноябрь.\n");
        }

        if (number == 12) {
            printf("Данному номеру соответствует месяц декабрь.\n");
        }
        else if (number > 12) {
            printf("Неверный номер.");
        }
        printf("\nПродолжить?\n");
        scanf_s(" %c", &choose);
        if (toupper(choose) == 'n') choose = 'N';
    } while (choose != 'N');
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
