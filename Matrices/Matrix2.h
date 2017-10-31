#pragma once
#include <iostream>
using namespace std;
class Matrix2
{
public:
	float mMat[];
	Matrix2();
	Matrix2(float mat[]);
	Matrix2(float indexA, float indexB, float indexC, float indexD);
	Matrix2 operator + (Matrix2 & other);
	Matrix2 operator - (Matrix2 & other);
	Matrix2 operator * (Matrix2 & other);
	friend ostream& operator<<(ostream& os, Matrix2& matrix);
	friend istream& operator >> (istream &in, Matrix2 matrix);
};