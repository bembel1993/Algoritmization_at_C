#include <stdio.h>

int value(int *x, int *y, int *z); 
int main() {
	int x, y, z;
	printf("Input: ");
	scanf_s("%d %d %d", &x, &y, &z);
	printf("\nfunction main X = %d, Y = %d, Z = %d \n", x, y, z);
	value(&x, &y, &z);
	printf("\n\nvalue in main X = %d, Y = %d, Z = %d \n", x, y, z);
	return (0);
}
int value(int *x, int *y, int *z){
	int min, mid, max;
	min=*x;
	if(*z<min)
		min=*z;
	if(*y<min)
		min=*y;
	
	max=*z;
	if(*x>max)
		max=*x;
	if(*y>max)
		max=*y;
	if(*x != min && *x != max) mid = *x;
	if(*y != min && *y != max) mid = *y;
	if(*z != min && *z != max) mid = *z;
	if(*x == *y || *x == *z) {
		mid = *x;
	}
	*x=min;
	*y=mid;
	*z=max;
	printf("\n\nfunction Value X = %d, Y = %d, Z = %d", *x, *y, *z);
	return;
}

