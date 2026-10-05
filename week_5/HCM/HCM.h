
#pragma once  // Prevents this file from being included multiple times
class HCM {

private:
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

public:
	int choice;
	int months;
	double charges;
	double totalCharges = 0.0;  

	void displayMenu();
	void calcCharges();
};