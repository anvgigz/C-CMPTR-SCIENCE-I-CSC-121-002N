#include "Circle.h"	
#include <iostream> 
#include <cmath>     // Needed for the pow function
using namespace std;


void Circle::calcArea()
{
	double area = -1;     //, radius;

	cout << "This program calculates the area of a circle.\n";

	// Get the radius
	cout << "What is the radius of the circle? ";
	cin >> radius;

	// Compute and display the area
	area = PI * pow(radius, 2);
	cout << "The area is " << area << endl;
}

void Circle::calcCircum()
{
	double circumference = -1;    //, radius;

	cout << "This program calculates the circumference of a circle.\n";

	// Get the radius
	//cout << "What is the radius of the circle? ";
	//cin >> radius;

	// Compute and display the circumference
	circumference = 2 * PI * radius;
	cout << "The circumference is " << circumference << endl;
}
