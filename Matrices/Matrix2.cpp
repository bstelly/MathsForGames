#include "Matrix2.h"
#include <math.h>

Matrix2::Matrix2()
{
	
}

Matrix2::Matrix2(float mat[])
{
	for (int i = 0; i < 4; i++)
	{
		mMat[i] = mat[i];
	}
}

Matrix2::Matrix2(float indexA, float indexB, float indexC, float indexD)
{
	mMat[0] = indexA;
	mMat[1] = indexB;
	mMat[2] = indexC;
	mMat[3] = indexD;
}

Matrix2 Matrix2::operator + (Matrix2 & other)
{
	Matrix2 temp;
	temp.mMat[0] = mMat[0] + other.mMat[0];
	temp.mMat[1] = mMat[1] + other.mMat[1];
	temp.mMat[2] = mMat[2] + other.mMat[2];
	temp.mMat[3] = mMat[3] + other.mMat[3];
	return temp;
}

Matrix2 Matrix2::operator - (Matrix2 & other)
{
	Matrix2 temp;
	temp.mMat[0] = mMat[0] - other.mMat[0];
	temp.mMat[1] = mMat[1] - other.mMat[1];
	temp.mMat[2] = mMat[2] - other.mMat[2];
	temp.mMat[3] = mMat[3] - other.mMat[3];
	return temp;
}

Matrix2 Matrix2::operator* (Matrix2 & other)
{
	Matrix2 temp;											
	temp.mMat[0] = (mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[2]);
	temp.mMat[1] = (mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[3]);
	temp.mMat[2] = (mMat[2] * other.mMat[0]) + (mMat[3] * other.mMat[2]);
	temp.mMat[3] = (mMat[2] * other.mMat[1]) + (mMat[3] * other.mMat[3]);
	return temp;
}

//Matrix2 Matrix2::operator* (Vector2& other)
//{
//
//}

Matrix2 Matrix2::RotateX(float angle)
{
	float cosineOfAngle = cos(angle);
	float sineOfAngle = sin(angle);
	float negativeSineOfAngle = -(sin(angle));
	Matrix2 rotate(cosineOfAngle, negativeSineOfAngle, sineOfAngle, cosineOfAngle);
	Matrix2 temp;
	temp.mMat[0] = (mMat[0] * cosineOfAngle) + (mMat[1] * sineOfAngle);
	temp.mMat[1] = (mMat[0] * negativeSineOfAngle) + (mMat[1] * cosineOfAngle);
	temp.mMat[2] = (mMat[2] * cosineOfAngle) + (mMat[3] * sineOfAngle);
	temp.mMat[3] = (mMat[2] * negativeSineOfAngle) + (mMat[3] * cosineOfAngle);
	return temp;
}

//void Matrix2::RotateY(float angle)
//{
//
//}
//
//void Matrix2::RotateZ(float angle)
//{
//
//}


istream& operator >> (istream& in, Matrix2 matrix)
{
	in >> matrix.mMat[0] >> matrix.mMat[1] >> matrix.mMat[2] >> matrix.mMat[3];
	return in;
}

ostream& operator << (ostream &os, Matrix2 &matrix)
{
	os << matrix.mMat[0] << "	" << matrix.mMat[1] << std::endl
	<< matrix.mMat[2] << "	" << matrix.mMat[3] << std::endl;
	return os;
}