#include <iostream>
#include "Matrix2.h"
#include "Matrix3.h"
#include "Matrix4.h"

int main()
{
	Matrix4 matrixOne(7, 8, 8, 7, 4, 2, 3, 4, 6, 8, 5, 6, 1, 2, 3, 7);
	Matrix4 matrixTwo(4, 2, 6, 2, 8, 7, 5, 6, 4, 7, 6, 2, 3, 3, 4, 7);
	Matrix4 matrixThree = matrixOne * matrixTwo;
	Matrix3 matrixFour(1, 2, 3, 4, 1, 2, 3, 4, 1);
	float result = cos(90);
	Matrix3 matrixFive = matrixFour.RotateX(90);

	std::cout << matrixFive;
	
	system("pause");
}