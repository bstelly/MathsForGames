#include <iostream>
#include "Vector2.h"
int main()
{
	float vecOneFloatOne;
	float vecOneFloatTwo;
	float vecTwoFloatOne;
	float vecTwoFloatTwo;
	std::cout << "Input the X value for the first vector." << std::endl;
	std::cin >> vecOneFloatOne;
	std::cout << "Input the Y value for the first vector." << std::endl;
	std::cin >> vecOneFloatTwo;
	std::cout << "Input the X value for the second vector." << std::endl;
	std::cin >> vecTwoFloatOne;
	std::cout << "Input the Y value for the second vector." << std::endl;
	std::cin >> vecTwoFloatTwo;
	Vector2 vectorOne(vecOneFloatOne, vecOneFloatTwo);
	Vector2 vectorTwo(vecTwoFloatOne, vecTwoFloatTwo);
	float result = vectorOne.Dot(vectorTwo);
	if (result == 0)
	{
		std::cout << "The vectors are perpendicular to each other." << std::endl;
		std::cout << "The angle between the two vectors is: 90 degrees." << std::endl;
	}
	else
	{
		std::cout << "The vectors are not perpendicular to each other." << std::endl;
		/*float angle;
		std::cout << "The angle between the two vectors is: " << angle << " degrees." <<
			std::endl;*/
	}
	system("pause");
}