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
	temp.mX = mX * other;
	temp.mY = mY * other;
	temp.mZ = mZ * other;
	return temp;
}

bool Vector3::operator == (Vector3 & other)
{
	if (mX == other.mX && mY == other.mY && mZ == other.mZ)
	{
		return true;
	}
}

float Vector3::Dot(Vector3 & other)
{
	float dot;
	dot = (mX * other.mX) + (mY * other.mY) + (mZ * other.mZ);
	return dot;
}

Vector3 Vector3::Cross(Vector3 & other)
{
	Vector3 temp;
	temp.mX = (mY * other.mZ) - (mZ * other.mY);
	temp.mY = (mZ * other.mX) - (mX * other.mZ);
	temp.mZ = (mX * other.mY) - (mY * other.mX);
	return temp;
}

float Vector3::Magnitude()
{
	float xSquared = mX * mX;
	float ySquared = mY * mY;
	float zSquared = mZ * mZ;
	float sum = xSquared + ySquared + zSquared;
	float magnitude = sqrt(sum);
	return magnitude;
}

Vector3 Vector3::Normalize()
{
	Vector3 temp;
	temp.mX = mX / Magnitude();
	temp.mY = mY / Magnitude();
	temp.mZ = mZ / Magnitude();
	return temp;
}

ostream & operator<<(ostream & os, const Vector3 & vector)
{
	os << "<" << vector.mX << ", " << vector.mY << ', ' << vector.mZ << ">";
	return os;
}