// 2. Номер телефона.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;
struct Phone {
    int codeCity = 212;
    int numTelStantion = 767;
    int numSubscriber = 8900;
};
struct PhoneUser {
    int codeCityUser;
    int numTelUser;
    int numUser;
};
void starline();
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Phone phone;
    PhoneUser phoneUs;
    cout << "Введите код города, номер станции и номер абонента: " << endl;
    cin >> phoneUs.codeCityUser;
    cin >> phoneUs.numTelUser;
    cin >> phoneUs.numUser;
    starline();
    cout << "Мой номер (" << phone.codeCity << ")" <<
        phone.numTelStantion << "-" << phone.numSubscriber << endl;
    starline();
    cout << "Ваш номер (" << phoneUs.codeCityUser << ")" <<
        phoneUs.numTelUser << "-" << phoneUs.numUser << endl;
    return 0;
}
void starline() {
    for (int j = 0; j < 50; j++)
        cout << '-';
    cout << endl;
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
