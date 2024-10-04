// Ch4Ex23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
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
			case 1:
				double radius;
				double area;
				cout << "What is the radius of the circle?" << endl;
				cin >> radius;
				area = pow(radius, 2) * M_PI;
			case 2:
				double width;
				double length;
				// ask for info
				area = width * length;
			case 3:
				double width;
				double length;
				// ask info
				area = (width * length) * .5;
			case 4:
				break;
			default:
				cout << "Please make a valid choice." << endl;



	}




	return 0;
}

