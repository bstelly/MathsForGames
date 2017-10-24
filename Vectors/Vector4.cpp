#include "Vector4.h"

Vector4::Vector4()
{
	mX = 0;
	mY = 0; 
	mZ = 0;
	mW = 0;
}

Vector4::Vector4(float x, float y, float z, float w)
{
	mX = x;
	mY = y;
	mZ = z;
	mW = w;
}

Vector4 Vector4::operator + (Vector4 &other)
{
	Vector4 temp;
	temp.mX = mX + other.mX;
	temp.mY = mY + other.mY;
	temp.mZ = mZ + other.mZ;
	temp.mW = mW + other.mW;
	return temp;
}

Vector4 Vector4::operator - (Vector4 &other)
{
	Vector4 temp;
	temp.mX = mX - other.mX;
	temp.mY = mY - other.mY;
	temp.mZ = mZ - other.mZ;
	temp.mW = mW - other.mW;
	return temp;
}

Vector4 Vector4::operator * (float other)
{
	Vector4 temp;
	temp.mX = mX * other;
	temp.mY = mY * other;
	temp.mZ = mZ * other;
	temp.mW = mW * other;
	return temp;
}

bool Vector4::operator == (Vector4 &other)
{
	if (mX == other.mX && mY == other.mY && mZ == other.mZ && mW == other.mW)
	{
		return true;
	}
}

float Vector4::Dot(Vector4 & other)
{
	float dot;
	dot = (mX * other.mX) + (mY * other.mY) + (mZ * other.mZ) + (mW * other.mW);
	return dot;
}

