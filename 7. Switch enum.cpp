// 7. Switch enum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h>
#include <iostream>
using namespace std;
enum etype { laborer, secretary, manager, accountant, executive, researcher };
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    etype number;
    char choice;
    cout << " Введите первую букву должности " << endl;
    cout << " (laborer, secretary, manager, accountant, executive, researcher) ";
        cin >> choice;
        switch (choice) {
        case 'l':
            number == laborer;
            cout << " полное название должности: laborer" << endl;
            break;
        case 's':
            number == secretary;
            cout << " полное название должности: secretary" << endl;
            break;
        case 'm':
            number == manager;
            cout << " полное название должности: manager" << endl;
            break;
        case 'a':
            number == accountant;
            cout << " полное название должности: accountant" << endl;
            break;
        case 'e':
            number == executive;
            cout << " полное название должности: executive" << endl;
            break;
        case 'r':
            number == researcher;
            cout << " полное название должности: researcher" << endl;
            break;
        default:
            cout << " Выбор неверен. " << endl;
            break;
        }
    cout << "Press ENTER to continue. . .";
    system("pause");
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
