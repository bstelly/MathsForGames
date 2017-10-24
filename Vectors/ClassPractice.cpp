#include <iostream>

struct Vector2
{
	float mX;
	float mY;

};

Vector2 Add(Vector2 lhs, Vector2 rhs)
{
	Vector2 temp;
	temp.mX = lhs.mX + rhs.mX;
	temp.mY = lhs.mY + rhs.mY;
	return temp;
}

Vector2 Subtract(Vector2 lhs, Vector2 rhs)
{
	Vector2 temp;
	temp.mX = lhs.mX - rhs.mX;
	temp.mY = lhs.mY - rhs.mY;
	return temp;
}

Vector2 Scale(Vector2 lhs, float rhs)
{
	Vector2 temp;
	temp.mX = lhs.mX * rhs;
	temp.mY = lhs.mY * rhs;
	return temp;
}

//int main()
//{
//	Vector2 testOne;
//	Vector2 testTwo;
//	testOne.mX = 5;
//	testOne.mY = 5;
//	testTwo.mX = 5;
//	testTwo.mY = 5;
//	Vector2 testThree = Add(testOne, testTwo);		//Should be (10, 10)
//	Vector2 testFour = Subtract(testOne, testTwo);	//Should be (0, 0)
//	Vector2 testFive = Scale(testThree, 3);			//Should be (30, 30)
//
//	
//}