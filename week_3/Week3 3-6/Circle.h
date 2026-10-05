#pragma once

class Circle
{
private:
	double radius = -1;
	const double PI = 3.14159;		//named constants are always in all caps
public:
	void calcArea();
	void calcCircum();
};