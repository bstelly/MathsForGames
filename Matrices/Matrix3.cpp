#include "Matrix3.h"
#include <math.h>
using namespace std;
Matrix3::Matrix3()
{

}

Matrix3::Matrix3(float mat[])
{
	for (int i = 0; i < 9; i++)
	{
		mMat[i] = mat[i];
	}
}

Matrix3::Matrix3(float indexA, float indexB, float indexC, float indexD, float indexE,
	float indexF, float indexG, float indexH, float indexI)
{
	mMat[0] = indexA;
	mMat[1] = indexB;
	mMat[2] = indexC;
	mMat[3] = indexD;
	mMat[4] = indexE;
	mMat[5] = indexF;
	mMat[6] = indexG;
	mMat[7] = indexH;
	mMat[8] = indexI;
}

Matrix3 Matrix3::operator + (Matrix3 & other)
{
	Matrix3 temp;
	for (int i = 0; i < 9; i++)
	{
		temp.mMat[i] = (mMat[i] + other.mMat[i]);
	}
	return temp;
}

Matrix3 Matrix3::operator - (Matrix3 & other)
{
	Matrix3 temp;
	temp.mMat[0] = mMat[0] - other.mMat[0];
	temp.mMat[1] = mMat[1] - other.mMat[1];
	temp.mMat[2] = mMat[2] - other.mMat[2];
	temp.mMat[3] = mMat[3] - other.mMat[3];
	temp.mMat[4] = mMat[4] - other.mMat[4];
	temp.mMat[5] = mMat[5] - other.mMat[5];
	temp.mMat[6] = mMat[6] - other.mMat[6];
	temp.mMat[7] = mMat[7] - other.mMat[7];
	temp.mMat[8] = mMat[8] - other.mMat[8];
	return temp;
}
																	
Matrix3 Matrix3::operator* (Matrix3 & other)
{
	Matrix3 temp;
	temp.mMat[0] = (mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[3]) + 
		(mMat[2] * other.mMat[6]);
	temp.mMat[1] = (mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[4]) + 
		(mMat[2] * other.mMat[7]);
	temp.mMat[2] = (mMat[0] * other.mMat[2]) + (mMat[1] * other.mMat[5]) + 
		(mMat[2] * other.mMat[8]);
	temp.mMat[3] = (mMat[3] * other.mMat[0]) + (mMat[4] * other.mMat[3]) + 
		(mMat[5] * other.mMat[6]);
	temp.mMat[4] = (mMat[3] * other.mMat[1]) + (mMat[4] * other.mMat[4]) + 
		(mMat[5] * other.mMat[7]);
	temp.mMat[5] = (mMat[3] * other.mMat[2]) + (mMat[4] * other.mMat[5]) +
		(mMat[5] * other.mMat[8]);
	temp.mMat[6] = (mMat[6] * other.mMat[0]) + (mMat[7] * other.mMat[3]) + 
		(mMat[8] * other.mMat[6]);
	temp.mMat[7] = (mMat[6] * other.mMat[1]) + (mMat[7] * other.mMat[4]) + 
		(mMat[8] * other.mMat[7]);
	temp.mMat[8] = (mMat[6] * other.mMat[2]) + (mMat[7] * other.mMat[5]) + 
		(mMat[8] * other.mMat[8]);


	return temp;
}

istream& operator >> (istream& in, Matrix3 matrix)
{
	in >> matrix.mMat[0] >> matrix.mMat[1] >> matrix.mMat[2] >> matrix.mMat[3]
		>> matrix.mMat[4] >> matrix.mMat[5] >> matrix.mMat[6] >> matrix.mMat[7]
		>> matrix.mMat[8];
	return in;
}

ostream& operator << (ostream &os, Matrix3 &matrix)
{
	os << matrix.mMat[0] << "	" << matrix.mMat[1] << "	" << matrix.mMat[2] << endl
		<< matrix.mMat[3] << "	" << matrix.mMat[4] << "	" << matrix.mMat[5] << endl
		<< matrix.mMat[6] << "	" << matrix.mMat[7] << "	" << matrix.mMat[8];
	return os;
}