// Ch4Ex23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

const double PI = 3.14159;

int main()
{
	double radius;
	double area;
	double width1;
	double length1;
	double base;
	double height;
	double area2;
	double area3;
	int choice;
	while (true)
	{
		cout << "[1] Compute the area of a circle" << endl;
		cout << "[2] Compute the area of a rectangle" << endl;
		cout << "[3] Compute the area of a triangle" << endl;
		cout << "[4] Exit" << endl;
		cout << "Please enter the number of your choice." << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "What is the radius of the circle?" << endl;
			cin >> radius;
			area = PI * pow(radius, 2);
			
			if (radius < 0)
				cout << "Please input a positive number." << endl; 
			else 
				cout << "The circle has an area of " << area << endl;
			break;
		case 2:
			cout << "What is the length?" << endl;
			cin >> length1;
			
			if (length1 > 0)
			{
				cout << "What is the width?" << endl;
				cin >> width1;

				if (width1 > 0) {
					area2 = width1 * length1;
					cout << "The rectangle has an area of " << area2 << endl;
				}
				else {
					cout << "Please input a positive number." << endl;
				}
			}
			break;
		case 3:
			cout << "What is the height?" << endl;
			cin >> height;
			
			if (height > 0)
			{
				cout << "What is the base?" << endl;
				cin >> base;

				if (base > 0) {
					area3 = (height * base) * .5;
					cout << "The triangle has an area of " << area3 << endl;
				}
				else {
					cout << "Please input a positive number." << endl;
				}
			}
			break;
		case 4:
			cout << "lol bye" << endl;
			break;
		default:
			cout << "Please make a valid choice." << endl;
		}


	}




	return 0;
}

