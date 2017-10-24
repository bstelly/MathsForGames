#include "Vector3.h"

Vector3::Vector3()
{
	mX = 0;
	mY = 0;
	mZ = 0;
}

Vector3::Vector3(float x, float y, float z)
{
	mX = x;
	mY = y;
	mZ = z;
}

Vector3 Vector3::operator + (Vector3 & other)
{
	Vector3 temp;
	temp.mX = mX + other.mX;
	temp.mY = mY + other.mY;
	temp.mZ = mZ + other.mZ;
	return temp;
}

Vector3 Vector3::operator - (Vector3 & other)
{
	Vector3 temp;
	temp.mX = mX - other.mX;
	temp.mY = mY - other.mY;
	temp.mZ = mZ - other.mZ;
	return temp;
}

Vector3 Vector3::operator * (float other)
{
	Vector3 temp;
	temp.mX = temp.mX * other;
	temp.mY = temp.mY * other;
	temp.mZ = temp.mZ * other;
	return temp;
}