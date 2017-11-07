#include "Matrix4.h"
#include <math.h>
using namespace std;

Matrix4::Matrix4()
{

}

Matrix4::Matrix4(float mat[])
{
	for (int i = 0; i < 16; i++)
	{
		mMat[i] = mat[i];
	}
}

Matrix4::Matrix4(float indexA, float indexB, float indexC, float indexD, float indexE,
	float indexF, float indexG, float indexH, float indexI, float indexJ,
	float indexK, float indexL, float indexM, float indexN, float indexO,
	float indexP)
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
	mMat[9] = indexJ;
	mMat[10] = indexK;
	mMat[11] = indexL;
	mMat[12] = indexM;
	mMat[13] = indexN;
	mMat[14] = indexO;
	mMat[15] = indexP;
}

Matrix4 Matrix4::operator + (Matrix4 & other)
{
	Matrix4 temp;
	temp.mMat[0] = mMat[0] + other.mMat[0];
	temp.mMat[1] = mMat[1] + other.mMat[1];
	temp.mMat[2] = mMat[2] + other.mMat[2];
	temp.mMat[3] = mMat[3] + other.mMat[3];
	temp.mMat[4] = mMat[4] + other.mMat[4];
	temp.mMat[5] = mMat[5] + other.mMat[5];
	temp.mMat[6] = mMat[6] + other.mMat[6];
	temp.mMat[7] = mMat[7] + other.mMat[7];
	temp.mMat[8] = mMat[8] + other.mMat[8];
	temp.mMat[9] = mMat[9] + other.mMat[9];
	temp.mMat[10] = mMat[10] + other.mMat[10];
	temp.mMat[11] = mMat[11] + other.mMat[11];
	temp.mMat[12] = mMat[12] + other.mMat[12];
	temp.mMat[13] = mMat[13] + other.mMat[13];
	temp.mMat[14] = mMat[14] + other.mMat[14];
	temp.mMat[15] = mMat[15] + other.mMat[15];
	return temp;
}

Matrix4 Matrix4::operator - (Matrix4 & other)
{
	Matrix4 temp;
	temp.mMat[0] = mMat[0] - other.mMat[0];
	temp.mMat[1] = mMat[1] - other.mMat[1];
	temp.mMat[2] = mMat[2] - other.mMat[2];
	temp.mMat[3] = mMat[3] - other.mMat[3];
	temp.mMat[4] = mMat[4] - other.mMat[4];
	temp.mMat[5] = mMat[5] - other.mMat[5];
	temp.mMat[6] = mMat[6] - other.mMat[6];
	temp.mMat[7] = mMat[7] - other.mMat[7];
	temp.mMat[8] = mMat[8] - other.mMat[8];
	temp.mMat[9] = mMat[9] - other.mMat[9];
	temp.mMat[10] = mMat[10] - other.mMat[10];
	temp.mMat[11] = mMat[11] - other.mMat[11];
	temp.mMat[12] = mMat[12] - other.mMat[12];
	temp.mMat[13] = mMat[13] - other.mMat[13];
	temp.mMat[14] = mMat[14] - other.mMat[14];
	temp.mMat[15] = mMat[15] - other.mMat[15];
	return temp;
}								
														
Matrix4 Matrix4::operator* (Matrix4 & other)			
{										
	Matrix4 temp;
	temp.mMat[0] = (mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[4]) + 
		(mMat[2] * other.mMat[8]) + (mMat[3] * other.mMat[12]);
	temp.mMat[1] = (mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[5]) + 
		(mMat[2] * other.mMat[9]) + (mMat[3] * other.mMat[13]);
	temp.mMat[2] = (mMat[0] * other.mMat[2]) + (mMat[1] * other.mMat[6]) + 
		(mMat[2] * other.mMat[10]) + (mMat[3] * other.mMat[14]);
	temp.mMat[3] = (mMat[0] * other.mMat[3]) + (mMat[1] * other.mMat[7]) + 
		(mMat[2] * other.mMat[11]) + (mMat[3] * other.mMat[15]);
	temp.mMat[4] = (mMat[4] * other.mMat[0]) + (mMat[5] * other.mMat[4]) + 
		(mMat[6] * other.mMat[8]) + (mMat[7] * other.mMat[12]);
	temp.mMat[5] = (mMat[4] * other.mMat[1]) + (mMat[5] * other.mMat[5]) + 
		(mMat[6] * other.mMat[9]) + (mMat[7] * other.mMat[13]);
	temp.mMat[6] = (mMat[4] * other.mMat[2]) + (mMat[5] * other.mMat[6]) + 
		(mMat[6] * other.mMat[10]) + (mMat[7] * other.mMat[14]);
	temp.mMat[7] = (mMat[4] * other.mMat[3]) + (mMat[5] * other.mMat[7]) + 
		(mMat[6] * other.mMat[11]) + (mMat[7] * other.mMat[15]);
	temp.mMat[8] = (mMat[8] * other.mMat[0]) + (mMat[9] * other.mMat[4]) + 
		(mMat[10] * other.mMat[8]) + (mMat[11] * other.mMat[12]);
	temp.mMat[9] = (mMat[8] * other.mMat[1]) + (mMat[9] * other.mMat[5]) + 
		(mMat[10] * other.mMat[9]) + (mMat[11] * other.mMat[13]);
	temp.mMat[10] = (mMat[8] * other.mMat[2]) + (mMat[9] * other.mMat[6]) + 
		(mMat[10] * other.mMat[10]) + (mMat[11] * other.mMat[14]);
	temp.mMat[11] = (mMat[8] * other.mMat[3]) + (mMat[9] * other.mMat[7]) + 
		(mMat[10] * other.mMat[11]) + (mMat[11] * other.mMat[15]);
	temp.mMat[12] = (mMat[12] * other.mMat[0]) + (mMat[13] * other.mMat[4]) + 
		(mMat[14] * other.mMat[8]) + (mMat[15] * other.mMat[12]);
	temp.mMat[13] = (mMat[12] * other.mMat[1]) + (mMat[13] * other.mMat[5]) + 
		(mMat[14] * other.mMat[9]) + (mMat[15] * other.mMat[13]);
	temp.mMat[14] = (mMat[12] * other.mMat[2]) + (mMat[13] * other.mMat[6]) + 
		(mMat[14] * other.mMat[10]) + (mMat[15] * other.mMat[14]);
	temp.mMat[15] = (mMat[12] * other.mMat[3]) + (mMat[13] * other.mMat[7]) + 
		(mMat[14] * other.mMat[11]) + (mMat[15] * other.mMat[15]);
	return temp;
}

Matrix4 Matrix4::RotateX(float angle)
{
	angle = ((angle * 3.14) / 180);
	Matrix4 rot(1, 0, 0, 0,
		0, cos(angle), -sin(angle), 0,
		0, sin(angle), cos(angle), 0,
		0, 0, 0, 1);
	Matrix4 temp(mMat[0], mMat[1], mMat[2], mMat[3],
		mMat[4], mMat[5], mMat[6], mMat[7],
		mMat[8], mMat[9], mMat[10], mMat[11],
		mMat[12], mMat[13], mMat[14], mMat[15]);
	Matrix4 result = rot * temp;
	return result;
}

Matrix4 Matrix4::RotateY(float angle)
{
	angle = ((angle * 3.14) / 180);
	Matrix4 rot(cos(angle), 0, sin(angle), 0,
		0, 1, 0, 0,
		-sin(angle), 0, cos(angle), 0,
		0, 0, 0, 1);
	Matrix4 temp(mMat[0], mMat[1], mMat[2], mMat[3],
		mMat[4], mMat[5], mMat[6], mMat[7],
		mMat[8], mMat[9], mMat[10], mMat[11],
		mMat[12], mMat[13], mMat[14], mMat[15]);
	Matrix4 result = rot * temp;
	return result;
}

Matrix4 Matrix4::RotateZ(float angle)
{
	angle = ((angle * 3.14) / 180);
	Matrix4 rot(cos(angle), -sin(angle), 0, 0,
		sin(angle), cos(angle), 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 1);
	Matrix4 temp(mMat[0], mMat[1], mMat[2], mMat[3],
		mMat[4], mMat[5], mMat[6], mMat[7],
		mMat[8], mMat[9], mMat[10], mMat[11],
		mMat[12], mMat[13], mMat[14], mMat[15]);
	Matrix4 result = rot * temp;
	return result;
}

Vector4 Matrix4::operator*(Vector4 &other)
{
	Vector4 temp;
	temp.mX = (mMat[0] * other.mX) + (mMat[1] * other.mY) + (mMat[2] * other.mZ) +
			(mMat[3] * other.mW);
	temp.mY = (mMat[4] * other.mX) + (mMat[5] * other.mY) + (mMat[6] * other.mZ) +
		(mMat[7] * other.mW);
	temp.mZ = (mMat[8] * other.mX) + (mMat[9] * other.mY) + (mMat[10] * other.mZ) +
		(mMat[11] * other.mW);
	temp.mW = (mMat[12] * other.mX) + (mMat[13] * other.mY) + (mMat[14] * other.mZ) +
		(mMat[15] * other.mW);
	return temp;
}

istream& operator >> (istream& in, Matrix4 matrix)
{
	in >> matrix.mMat[0] >> matrix.mMat[1] >> matrix.mMat[2] >> matrix.mMat[3]
		>> matrix.mMat[4] >> matrix.mMat[5] >> matrix.mMat[6] >> matrix.mMat[7]
		>> matrix.mMat[8] >> matrix.mMat[9] >> matrix.mMat[10] >> matrix.mMat[11]
		>> matrix.mMat[12] >> matrix.mMat[13] >> matrix.mMat[14] >> matrix.mMat[15];
	return in;
}

ostream& operator << (ostream &os, Matrix4 &matrix)
{
	os << matrix.mMat[0] << "	" << matrix.mMat[1] << "	" << matrix.mMat[2] << "	"
		<< matrix.mMat[3] << endl << matrix.mMat[4] << "	" << matrix.mMat[5] << "	" 
		 << matrix.mMat[6] << "	" << matrix.mMat[7] << endl << matrix.mMat[8] << "	" <<
		matrix.mMat[9] << "	" << matrix.mMat[10] << "	" << matrix.mMat[11] << endl <<
		matrix.mMat[12] << "	" << matrix.mMat[13] << "	" << matrix.mMat[14] 
		<< "	" << matrix.mMat[15] << endl;
	return os;
}