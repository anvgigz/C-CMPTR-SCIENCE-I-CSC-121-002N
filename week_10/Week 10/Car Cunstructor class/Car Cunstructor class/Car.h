#pragma once
#include <string>
using namespace std;


class Car {
	
private:
	int year = -1;
	string make = "Unknown";
	int speed = -1;


public:
	Car(int y, string m);

	int getYear();
	string getMake();
	int getSpeed();

	void accelerate();
	void brake();

};