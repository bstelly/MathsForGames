#pragma once

class Vector2
{
private:
	float mX;
	float mY;

public:
	Vector2();
	Vector2(float x, float y);
	float Dot(Vector2 &other);
};