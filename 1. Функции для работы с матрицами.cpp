// 1. Функции для работы с матрицами.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
const int STRING_ARR = 2;
const int COLUMN_ARR = 2;
using namespace std;
//////////////////////////////////////////////////
class Matrix
{
private:
    int mat1[STRING_ARR][COLUMN_ARR];
    int mat2[STRING_ARR][COLUMN_ARR];
  //  int n, m;
public:
    void getdate();             //ввод матрицы
    void multiplic();           //вывод перемноженной матрицы
    void addition();            //вывод сложенной матрицы
//////////////////////////////////////////////////   
    Matrix();                   //конструктор матрицы
    ~Matrix();                  //деструктор матрицы
    void mult();
    void addit();
};
//////////////////////////////////////////////////
Matrix::Matrix() {
    for (int i = 0; i < STRING_ARR; i++)
        for (int j = 0; j < COLUMN_ARR; j++)
            cin >> mat1[i][j];
    cout << "Матрица инициализирована.\n";
    cout << endl;
}
//------------------------------------------------
Matrix::~Matrix() {
    cout << "Память освобождена.\n";
}
//------------------------------------------------
void Matrix::mult() {
    cout << endl;
    cout << "Умножение матриц" << endl;
    for (int i = 0; i < STRING_ARR; i++)
    {
        for (int j = 0; j < COLUMN_ARR; j++)
            cout << mat1[i][j] * mat1[i][j] << " ";
        cout << endl;
    }
}
//------------------------------------------------
void Matrix::addit() {
    cout << endl;
    cout << "Сложение матриц" << endl;
    for (int i = 0; i < STRING_ARR; i++)
    {
        for (int j = 0; j < COLUMN_ARR; j++)
            cout << mat1[i][j] + mat1[i][j] << " ";
        cout << endl;
    }
}
//////////////////////////////////////////////////
void Matrix::getdate() {
    for (int i = 0; i < STRING_ARR; i++)
        for (int j = 0; j < COLUMN_ARR; j++)
            cin >> mat1[i][j];
    cout << endl;
    for (int i = 0; i < STRING_ARR; i++)
        for (int j = 0; j < COLUMN_ARR; j++)
            cin >> mat2[i][j];
}
//------------------------------------------------
void Matrix::multiplic() {
    cout << endl;
    cout << "Перемножение матриц" << endl;
    for (int i = 0; i < STRING_ARR; i++)
    {
        for (int j = 0; j < COLUMN_ARR; j++)
            cout << mat1[i][j] * mat2[i][j] << " ";
        cout << endl;
    }
}
//------------------------------------------------
void Matrix::addition() {
    cout << endl;
    cout << "Сложение матриц" << endl;
    for (int i = 0; i < STRING_ARR; i++)
    {
        for (int j = 0; j < COLUMN_ARR; j++)
            cout << mat1[i][j] + mat2[i][j] << " ";
        cout << endl;
    }
}
//////////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL, "Rus");
    Matrix mat;
 //   mat.getdate();
  //  mat.multiplic();
  //  mat.addition();
    mat.mult();
    mat.addit();
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
