// 3. Координаты точек.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;
struct Point {
    int p1;
    int p2;
    int sum;
};
//int summPoint(Point);
void starline();
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Point p1_1, p1_2, p2_1, p2_2, sum1, sum2;
    cout << "Введите координаты точки p1: "; cin >> p1_1.p1 >> p1_2.p1;
    starline();
    cout << "Введите координаты точки p2: "; cin >> p2_1.p2 >> p2_2.p2;
 //   summPoint(p1_1);
 //  summPoint(p1_2);
 //  summPoint(p2_1);
 //  summPoint(p2_2);
 //  summPoint(sum1);
 //  summPoint(sum2);
    sum1.sum = p1_1.p1 + p2_1.p2;
    sum2.sum = p1_2.p1 + p2_2.p2;
   starline();
   cout << "Координаты точки p1 + p2 равны " << sum1.sum << "." << sum2.sum;
    return 0;
}
//int summPoint(Point p1_1, Point p1_2, Point p2_1, Point p2_2, Point sum1, Point sum2) {
//    sum1.sum = p1_1.p1 + p2_1.p2;
//    sum2.sum = p1_2.p1 + p2_2.p2;
//    cout << "Координаты точки p1 + p2 равны " << sum1.sum << "." << sum2.sum;
//    return;
//}
void starline() {
    for (int j = 0; j < 45; j++)
        cout << '*';
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
