// 4. Создание структуры Volume.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std;
struct Distance {
    int feet;
    int inches;
};
struct Volume {
    Distance length;
    Distance width;
    Distance height;
};
int main() {
    system("chcp  1251");
    system("cls");
    float l, w, h;
    Volume room1 = { {16, 3.5}, {12, 6.25}, {8, 1.75} };
    l = room1.length.feet + room1.length.inches / 12.0;
    w = room1.width.feet + room1.width.inches / 12.0;
    h = room1.height.feet + room1.height.inches / 12.0;
    cout << "Длина = " << l << "  Ширина = " << w << " Высота = " << h << endl;
    cout << "Объем занимаемый помещением = " << l * w * h << endl;
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
