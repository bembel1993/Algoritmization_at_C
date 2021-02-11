#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
    const int STR1=10;
	const int CHR=50;
	const int STR2=5;
	const int CHR2=3;
void display (char sales[STR1][CHR], int x, int y);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char sales[STR1][CHR] = {"Chivalrous", "Courage",
	"Power", "Mind", "God", "Faith", "Courteous", "Fit", "Love",
	"Peace"
	};
	int x, y;
	x=STR2;
	y=CHR2;
	display(sales, x, y);
	cout <<  endl;
	return 0;
}

void display (char sales[STR1][CHR], int x, int y){
	for (int i=0; i<x; i++){
		cout << "\n " << i+1;
		for (int j=0; j<y; j++){
			cout << sales[i][j];
		}
	}
}
