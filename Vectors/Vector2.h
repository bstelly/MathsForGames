#pragma once

class Vector2
{
	float mX;
	float mY;
	
	Vector2();
	Vector2(float x, float y);
	Vector2 operator + (Vector2 & other);
	Vector2 operator - (Vector2 & other);
	Vector2 operator * (float other);
};