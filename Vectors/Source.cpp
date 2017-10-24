#include <iostream>
#include "Vector2.h"
#include "Vector3.h"
#include <assert.h>

int main()
{
	//Vector2 Tests
	Vector2 vector2One(5, 5);
	Vector2 vector2Two(3, 3);
	Vector2 testOne = vector2One + vector2Two;
	Vector2 resultOne(8, 8);
	assert(testOne == resultOne);
	
	Vector2 testTwo = vector2One - vector2Two;
	Vector2 resultTwo(2, 2);
	assert(testTwo == resultTwo);

	Vector2 testThree = vector2One * 3;
	Vector2 resultThree(15, 15);
	assert(testThree == resultThree);

	bool resultFour;
	Vector2 vector2Three(5, 5);
	if (vector2One == vector2Three)
	{
		resultFour = true;
	}
	assert(resultFour == true);

	Vector2 vector2Four(10, 2);
	float resultFive = 60;
	assert(resultFive == vector2Four.Dot(vector2One));


	//Vector3 tests
	Vector3 vector3One(3, 4, 5);
	Vector3 vector3Two(7, 8, 9);
	Vector3 testFour = vector3One + vector3Two;
	Vector3 resultSix(10, 12, 14);
	assert(testFour == resultSix);

	Vector3 testFive = vector3Two - vector3One;
	Vector3 resultSeven(4, 4, 4);
	assert(testFive == resultSeven);

	Vector3 testSix = vector3One * 5;
	Vector3 resultEight(15, 20, 24);
	assert(testSix == resultEight);

	bool resultNine;
	Vector3 vector3Three(3, 4, 5);
	if (vector3Three == vector3One)
	{
		resultNine = true;
	}
	assert(resultNine == true);
	
	float resultTen = 98;
	assert(resultTen == vector3One.Dot(vector3Two));






}