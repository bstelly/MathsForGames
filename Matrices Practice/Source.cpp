#include <iostream>
using namespace std;

int* Add(int a[], int b[])
{
	int *temp = new int[4];
	temp[0] = a[0] + b[0];
	temp[1] = a[1] + b[1];
	temp[2] = a[2] + b[2];
	temp[3] = a[3] + b[3];
	return temp;
}

int main()
{
	int matrixOne[4] = { 1, 2, 3, 4 };
	int matrixTwo[4] = { 5, 5, 5, 5 };
	int *matrixThree = Add(matrixOne, matrixTwo);
}