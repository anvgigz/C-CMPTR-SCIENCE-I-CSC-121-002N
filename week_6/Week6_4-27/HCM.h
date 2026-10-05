#pragma once

class HCM {
private:
	const double ADULT_RATE = 120.0;// Constants for membership rates
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

	int choice = -1;           // Menu choice
	int months = -1;           // Number of months
	double charges = 0.0;       // Monthly charges

public:
	void displayMenu();
	void calcHCM(int choice);

};