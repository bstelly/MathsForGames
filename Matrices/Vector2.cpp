#include "Vector2.h"
using namespace std;

Vector2::Vector2()
{
	mX = 0;
	mY = 0;
}

Vector2::Vector2(int x, int y)
{
	mX = x;
	mY = y;
}

Vector2 Vector2::operator + (Vector2 & other)
{
	Vector2 temp;
	temp.mX = mX + other.mX;
	temp.mY = mY + other.mY;
	return temp;
}

Vector2 Vector2::operator - (Vector2 & other)
{
	Vector2 temp;
	temp.mX = mX - other.mX;
	temp.mY = mY - other.mY;
	return temp;
}

Vector2 Vector2::operator* (float other)
{
	Vector2 temp;
	temp.mX = mX * other;
	temp.mY = mY * other;
	return temp;
}

bool Vector2::operator==(Vector2 &other)
{
	if (mX == other.mX && mY == other.mY)
	{
		return true;
	}
	else
	{
		return false;
	}
}

float Vector2::Dot(Vector2 &other)
{
	float dot;
	dot = (mX * other.mX) + (mY * other.mY);
	return dot;
}

float Vector2::Magnitude()
{
	float xSquared = mX * mX;
	float ySquared = mY * mY;
	float sum = xSquared + ySquared;
	float magnitude = sqrt(sum);
	return magnitude;
}

Vector2 Vector2::Normalize()
{
	Vector2 temp;
	temp.mX = mX / Magnitude();
	temp.mY = mY / Magnitude();
	return temp;
}

ostream & operator<<(ostream & os, const Vector2 & vector)
{
	os << "<" << vector.mX << ", " << vector.mY << ">";
	return os;
}

istream & operator >> (istream &in, Vector2 vector)
{
	in >> vector.mX >> vector.mY;
	return in;
}