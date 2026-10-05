// HCM.h - Header file for the Health Club Membership class
// This file contains ONLY the class declaration, not the implementation
#pragma once  // Prevents this file from being included multiple times

class HCM {

private:
	// Private member variables - data that belongs to the class
	// These rates are constants and won't change during runtime
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

public:
	// Public member variables - accessible from outside the class
	int choice;           // Stores the user's menu choice
	int months;           // Stores number of months selected
	double charges;       // Stores calculated membership charges

	// Function declarations (prototypes) - NOT implementations
	// These tell the compiler these functions exist, but the actual code is in HCM.cpp
	void displayMenu();   // Shows menu and handles user input
	void calcCharges();   // Calculates membership charges
};