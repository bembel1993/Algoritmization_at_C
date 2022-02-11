// 4. STACK - перегрузка функций баз. и произ. кл.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <process.h>
#include <iostream>
#include <windows.h>
using namespace std;
const int MAX = 5;                      //размер стека
//////////////////////////////////////////////////////////
class Stack {
protected:
    int st[MAX];                        //данные стека
    int top;                            //индекс посл. элем.
public:
    Stack() { top = - 1; }               //конструктор
    //помещение числа в стек
    void push(int var) { st[++top] = var; }
    //извлечение числа из стека
    int pop() { return st[top--]; }
};
/////////////////////////////////////////////////////////
class optimizedStack :public Stack {    //производный класс
public:
    void push(int var) {
        if (top >= MAX - 1) {
            cout << "\nОшибка: стек полон\n";
            exit(1);
        }
        Stack::push(var);  //такой командой метод push 
    }                      //получает доступ к классу Stack
    int pop() {
        if (top < 0) {
            cout << "\nОшибка: стек пуст\n";
            exit(1);
        }
        return Stack::pop();//такой командой метод pop
    }                       //получает доступ к классу Stack
};
/////////////////////////////////////////////////////////
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    optimizedStack s1;
    s1.push(2);
    s1.push(3);
    s1.push(12);
    s1.push(1);
    s1.push(31);
    cout << s1.pop();
    cout << endl << s1.pop();
    cout << endl << s1.pop();
    cout << endl << s1.pop();
    cout << endl << s1.pop();
    cout << endl << s1.pop();
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
