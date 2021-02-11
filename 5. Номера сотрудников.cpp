

#include <iostream>
#include <windows.h>
using namespace std;
const int QUAN_GRAT = 3;
struct Employee {
    int numExpert;
    float valueGratuity;
};
void starline();
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    Employee employee[QUAN_GRAT];
    for (n = 0; n < QUAN_GRAT; n++) {
        starline();
        cout << "Введите номер сотрудника ";
        cin >> employee[n].numExpert;
        cout << "Введите велечину его пособия ";
        cin >> employee[n].valueGratuity;
    }
    starline();
    for (n = 0; n < QUAN_GRAT; n++) {
        cout << "  Сотрудник № " << employee[n].numExpert;
        cout << "  имеет велечину пособия " << employee[n].valueGratuity << "$" << endl;
    }
    return 0;
}
void starline() {
    for (int j = 0; j < 38; j++) cout << "_";
    cout << endl;
}
