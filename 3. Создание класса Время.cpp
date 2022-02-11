// 3. Создание класса Время.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <ctime> 
#include <windows.h> 
using namespace std;
/////////////////////////////////////////////
class Timer {
    int seconds;
    public: 
  //время, задаваемое в минутах и секундах 
  Timer(int hours, int min, int sec) { 
      seconds = min * 60 + sec; 
  } 
  void run(); 
}; 
/////////////////////////////////////////////
void Timer::run() { 
  clock_t t1; 
  t1 = clock(); 
  int k = 0; 
  while  ((clock()  /  CLOCKS_PER_SEC  -  t1  /  CLOCKS_PER_SEC)  < 
seconds); 
  cout << "\a";//звуковой сигнал 
} 
/////////////////////////////////////////////
int main() { 
  SetConsoleCP(1251); 
  SetConsoleOutputCP(1251); 
  char str[80]; 
  int hours, min, sec; 
  cin >> hours >> min >> sec; 
  Timer Timer3(hours, min, sec); 
  Timer3.run();//отсчет 1 минуты и 10 секунд 
  cout<<"Прошло " << hours << " часов "
      <<min<<" минут и " << sec << " секунд" << endl; 
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
