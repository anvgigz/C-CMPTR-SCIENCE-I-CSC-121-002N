#include "Car.h"
#include <iostream>

using namespace std;

int main()
{
	Car myCar(2024, "Hyundai");

	cout << "Car Year: " << myCar.getYear() << endl;
	cout << "Car Make: " << myCar.getMake() << endl;
	cout << "Car Speed: " << myCar.getSpeed() << endl;

	cout << "\nAccelerating...";

	for (int i = 0; i < 5; i++)
	{
		myCar.accelerate();
		cout << "\nSpeed: " << myCar.getSpeed() << endl;
	}

	cout << "\nBraking...";

	for (int i = 0; i < 5; i++)
	{
		myCar.brake();
		cout << "\nspeed: " << myCar.getSpeed() << endl;
	}

	return 0;
}