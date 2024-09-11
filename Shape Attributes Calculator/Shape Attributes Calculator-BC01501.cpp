// Shape Attributes Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <dictionary>
using namespace std;

float GetInput(string inputMessage);

int main()
{
	dictionary<string, float> shapeAttributes[3][] = { float height, float width, float depth };
}
float GetInput(string inputMessage) 
{
	float userInput = 0.0;
	while (true) 
	{
		cout << inputMessage << endl;
		string rawInput;
		getline(cin, rawInput);
		try
		{
			userInput = stof(rawInput);
			if (userInput <= 0)
			{
				throw new exception;
			}
			break
		}
		catch(...)
		{
			cout << "this is an invalid input" << endl;
		}
	}
	return userInput;
}
float Volume(float height, float width, float depth) 
{
	float volume = height * width * depth;
	return volume;
}
float SurfaceArea(float height, float width, float depth)
{
	float SurfaceArea = 2((height * width) + (height * depth) + (depth * width))
		return SurfaceArea;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
