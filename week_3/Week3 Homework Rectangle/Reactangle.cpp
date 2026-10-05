#include "Reactangle.h"
#include "iostream"
using namespace std;

void Rectangle::calcArea()
{
	double area = -1;
	cout << "This calcArea function calculates the area of a rectangle.\n";
	cout << "Please enter the length of the rectangle: ";

	cin >> length;
	cout << "Please enter the width of the rectangle: ";

	cin >> width;
	area = length * width;
	cout << "The area of the rectangle is: " << area << endl;

}

void Rectangle::calcPermimeter()
{
	double perimeter = -1;
	cout << "The calcPerimeter function calculates the perimeter of a rectangle.\n";
	perimeter = (length + width) * 2;
	cout << " (length + width) * 2 = perimeter \n";
    cout <<">>>> 2 * (" << length << " + " << width << ") = " << perimeter << endl;
}
