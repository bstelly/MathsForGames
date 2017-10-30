#pragma once
#include <iostream>
using namespace std;

class Matrix3
{
public:
	float mMat[];
	Matrix3();
	Matrix3(float mat[]);
	Matrix3(float indexA, float indexB, float indexC, float indexD, float indexE,
		float indexF, float indexG, float indexH, float indexI);
	Matrix3 operator + (Matrix3 & other);
	Matrix3 operator - (Matrix3 & other);
	Matrix3 operator * (Matrix3 & other);
	friend ostream& operator<<(ostream& os, Matrix3& matrix);
	friend istream& operator >> (istream &in, Matrix3 matrix);
};