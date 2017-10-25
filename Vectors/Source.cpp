#include <iostream>
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include <assert.h>

int main()
{
	//Vector2 Tests
	Vector2 vector2One(5, 5);
	Vector2 vector2Two(3, 3);
	Vector2 vector2TestOne = vector2One + vector2Two;
	Vector2 resultOne(8, 8);
	assert(vector2TestOne == resultOne);
	
	Vector2 vector2TestTwo = vector2One - vector2Two;
	Vector2 resultTwo(2, 2);
	assert(vector2TestTwo == resultTwo);

	Vector2 vector2TestThree = vector2One * 3;
	Vector2 resultThree(15, 15);
	assert(vector2TestThree == resultThree);

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


	//Vector3 Tests
	Vector3 vector3One(3, 4, 5);
	Vector3 vector3Two(7, 8, 9);
	Vector3 vector3TestOne = vector3One + vector3Two;
	Vector3 resultSix(10, 12, 14);
	assert(vector3TestOne == resultSix);

	Vector3 vector3TestTwo = vector3Two - vector3One;
	Vector3 resultSeven(4, 4, 4);
	assert(vector3TestTwo == resultSeven);

	Vector3 vector3TestThree = vector3One * 5;
	Vector3 resultEight(15, 20, 24);
	assert(vector3TestThree == resultEight);

	bool resultNine;
	Vector3 vector3Three(3, 4, 5);
	if (vector3Three == vector3One)
	{
		resultNine = true;
	}
	assert(resultNine == true);
	
	float resultTen = 98;
	assert(resultTen == vector3One.Dot(vector3Two));


	//Vector4 Test
	Vector4 vector4One(1, 2, 3, 4);
	Vector4 vector4Two(5, 6, 7, 8);
	Vector4 vector4TestOne = vector4One + vector4Two;
	Vector4 resultEleven(6, 8, 10, 12);
	assert(vector4TestOne == resultEleven);

	Vector4 vector4TestTwo = vector4Two - vector4One;
	Vector4 resultTwelve(4, 4, 4, 4);
	assert(vector4TestTwo == resultTwelve);

	Vector4 vector4TestThree = vector4One * 5;
	Vector4 resultThirteen(5, 10, 15, 20);
	assert(vector4TestThree == resultThirteen);

	Vector4 vector4Three(1, 2, 3, 4);
	bool resultFourteen;
	if (vector4Three == vector4One)
	{
		resultFourteen = true;
	}
	assert(resultFourteen == true);

	float resultFifteen = 70;
	assert(resultFifteen == vector4One.Dot(vector4Two));




}