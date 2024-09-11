// Shape Attributes Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
long double pi = 3.14159265358979323846;
float GetInput(string inputMessage);
int GetChoice(string inputMessage, string options[8]);

int main()
{
	string shapes[8] = { "Circle", "Square", "Rectangle", "Triangle", "Cube", "Cuboid", "Sphere", "Cynlidner" };
	int shapeChoice = GetChoice("what shape would you like to calculate?", shapes);
	float width = GetInput("please input the base of the object");
	float height = width;
	float depth = width;
	float area = 0.0;
	float perim = 0.0;
	if (shapeChoice == 8 || shapeChoice == 6)
	{
		height = GetInput("Please input the height of the object");
	}
	float rectArea = width * height;
	float rectPerim = 2 * (width + height);
	float circArea = rectArea * pi;
	float circPerim = 2 * pi * width;
	if (shapeChoice == 6)
	{
		depth = GetInput("Please input the depth of the object");
	}
	float cubeVolume = rectArea * depth;
	float cubeSurfaceArea = (depth * rectPerim) + (2 * width * height);
	if (shapeChoice == 1)
	{
		area = circArea;
		perim = circPerim;
	}
	else if (shapeChoice == 2 || shapeChoice == 3)
	{
		area = rectArea;
		perim = rectPerim;
	}
	else if (shapeChoice == 4)
	{
		area = (pow(3, (float)1 / 2) / 4) * rectArea;
		perim = width * 3;
	}
	else if (shapeChoice == 5 || shapeChoice == 6)
	{
		area = cubeVolume;
		perim = cubeSurfaceArea;
	}
	else if (shapeChoice == 7)
	{
		area = ((float)4 / 3) * pi * cubeVolume;
		perim = 4 * circArea;
	}
	else if (shapeChoice == 8)
	{
		area = pi * cubeVolume;
		perim = circPerim * (height + depth);
	}

	if (shapeChoice <= 4)
	{
		cout << shapes[shapeChoice - 1] << " area: " << area << endl;
		cout << shapes[shapeChoice - 1] << " perimeter: " << perim << endl;
	}
	else if (shapeChoice >= 5)
	{
		cout << shapes[shapeChoice - 1] << " volume: " << area << endl;
		cout << shapes[shapeChoice - 1] << " surface area: " << perim << endl;
	}
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
			break;
		}
		catch(...)
		{
			cout << "this is an invalid input" << endl;
		}
	}
	return userInput;
}
int GetChoice(string inputMessage, string options[8])
{
	int userInput = 0;
	while (true)
	{
		for (int x = 0; x <= options->length() + 1; x++)
		{
			cout << x + 1 << " ----> " << options[x] << endl;
		}
		cout << inputMessage << endl;
		string rawInput;
		getline(cin, rawInput);
		try
		{
			userInput = stoi(rawInput);
			if (userInput <= 0 || userInput > options[8].length())
			{
				throw new exception;
			}
			else
			{
				break;
			}
		}
		catch (...)
		{
			cout << "this is not a valid input." << endl;
		}
	}
	return userInput;
}
