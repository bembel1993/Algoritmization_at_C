// Task12-2.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int Num; char y, n;
   
    printf("\t\t***** Расписание на неделю *****\n\n ");
    printf("Введите пожалуйста порядковый номер дня недели: ");
    scanf_s(" %d", &Num);
    switch (Num) {
    case(1): printf("\nСегодня понедельник. "); {
        if (Num == 1) {
            printf("Ваше расписание на этот день недели:\n");
            printf("1. Немецкий язык.\n");
            printf("2. Интернет технологии.\n");
            printf("3. Кикбоксинг.\n");
            printf("4. ОАиППО.\n");
        }
        break;
    }
    case(2): printf("Сегодня вторник."); {
        if (Num == 2) {
            printf("Ваше расписание на этот день недели:\n");
            printf("1. Английский язык.\n");
            printf("2. Интернет технологии.\n");
            printf("3. Атлетическая гимнастика.\n");
            printf("4. ОАиППО.\n");
        }
        break;
    }
    case(3): printf("Сегодня среда."); {
        if (Num == 3) {
            printf("Ваше расписание на этот день недели:\n");
            printf("1. Интернет технологии.\n");
            printf("2. Интернет технологии.\n");
            printf("3. ОАиППО.\n");
            printf("4. ОАиППО.\n");
        }
        break;
    }
    case(4): printf("Сегодня четверг."); {
        if (Num == 4) {
            printf("Ваше расписание на этот день недели:\n");
            printf("1. Немецка литература.\n");
            printf("2. ОАиППО.\n");
            printf("3. Кикбоксинг.\n");
            printf("4. ОАиППО.\n");
        }
        break;
    }
    case(5): printf("Сегодня пятница."); {
        if (Num == 5) {
            printf("Ваше расписание на этот день недели:\n");
            printf("1. Английская литература.\n");
            printf("2. Атлетическая гимнастика.\n");
            printf("3. Русская литература.\n");
        }
        break;
    }
    case(6): printf("Сегодня суббота."); {
        if (Num == 6) {
            printf("Ваше расписание на этот день недели:\n");
            printf("1. Немецкий язык.\n");
            printf("2. Интернет технологии.\n");
            printf("3. Кикбоксинг.\n");
            printf("4. ОАиППО.\n");
        }
        break;
    }
    case(7): printf("Сегодня воскресенье."); {
        if (Num == 7) {
            printf("Ваше расписание на этот день недели:\n");
            printf("1. ОАиППО.\n");
            printf("2. ОАиППО.\n");
            printf("3. Кикбоксинг.\n");
            printf("4. Немецкая литература.\n");
        }
        break;
    }
    default: {printf("Введенный Вами номер не является верным\n ");
        printf("Запустите программу снова ");
        break; }
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
