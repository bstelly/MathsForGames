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