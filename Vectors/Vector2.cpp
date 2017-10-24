#include "Vector2.h"

Vector2::Vector2()
{
	mX = 0;
	mY = 0;
}

Vector2::Vector2(float x, float y)
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
	temp.mX = temp.mX * other;
	temp.mY = temp.mY * other;
	return temp;
}