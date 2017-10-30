#include "Vector2.h"
#include <math.h>

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

float Vector2::Dot(Vector2 &other)
{
	float dot;
	dot = (mX * other.mX) + (mY * other.mY);
	return dot;
}