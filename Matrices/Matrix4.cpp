#include "Matrix4.h"

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
	os << matrix.mMat[0] << ", " << matrix.mMat[1] << ", " << matrix.mMat[2] << ", "
		<< matrix.mMat[3] << ", " << matrix.mMat[4] << ", " << matrix.mMat[5] << ", "
		<< matrix.mMat[6] << ", " << matrix.mMat[7] << ", " << matrix.mMat[8];
	return os;
} // add more indexes