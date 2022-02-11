// 4. Создание класса квадрат.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;
////////////////////////////////////////////////
class Square {
    int a;
public:
    Square();
    void area();
    void perimetr();
////////////////////////////////////////////////
    int area2() { return a * a; }
    int perimetr2() { return 4 * a; }
    void Show() {
        cout << endl;
        cout << "Площадь квадрата через метод Show ";
        cout << area2() << endl;
        cout << "Периметр квадрата через метод Show ";
        cout << perimetr2() << endl;
    }
};
////////////////////////////////////////////////
 Square::Square() {
    cin >> a;
}
//--------------------------------------------
void Square::area() {
    cout << endl;
    cout << "Площадь квадрата = ";
    cout << a * a << " ";
}
//--------------------------------------------
void Square::perimetr() {
    cout << endl;
    cout << "Периметр квадрата = ";
    cout << 4 * a << endl;
}
////////////////////////////////////////////////
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /////////////////
  /*  int a;    #include <cmath> #include <conio.h>
    cin >> a;  
    Square square(a);
    square.Show();
    _getch();*/
    /////////////////
    Square square;
    square.area();
    square.perimetr();
    square.Show();
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
