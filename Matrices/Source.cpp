#include <iostream>
#include "Matrix2.h"
#include "Matrix3.h"
#include "Matrix4.h"

int main()
{
	Matrix3 matrixOne(1, 2, 3, 4, 4, 5, 6, 7, 8);
	Matrix3 matrixTwo(3, 2, 4, 5, 3, 2, 3, 4, 5);
	Matrix3 matrixThree = matrixTwo + matrixOne;
	//std::cout << matrixThree;
}