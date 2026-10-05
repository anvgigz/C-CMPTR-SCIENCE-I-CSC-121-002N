// HCM.cpp - Implementation file for the Health Club Membership class
// This file contains the actual code for the functions declared in HCM.h
// The double colon (::) means "these functions belong to the HCM class"

#include "HCM.h"           // Include the header so we have access to the class declaration
#include <iostream>        // For console input/output
#include <iomanip>         // For formatting output (setprecision, fixed, showpoint)
using namespace std;       // Use the standard namespace


void HCM::displayMenu()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "   Health Club Membership Menu\n\n";
		cout << "1. Standard Adult Membership\n";
		cout << "2. Child Membership\n";
		cout << "3. Senior Citizen Membership\n";
		cout << "4. Quit the Program\n\n";
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "For how many months? ";
			cin >> months;
			calcCharges();
		}
		else if (choice == 2)  // ADD THIS
		{
			cout << "For how many months? ";
			cin >> months;
			calcCharges();
		}
		else if (choice == 3)  // ADD THIS
		{
			cout << "For how many months? ";
			cin >> months;
			calcCharges();
		}
		else if (choice != 4)
		{
			cout << "\nThe valid choices are 1 through 4.\n"
				<< "Run the program again and select one of those.\n";
		}
	}
}


void HCM::calcCharges()
{
	cout << fixed << showpoint << setprecision(2);
	if (choice == 1){
		charges = months * ADULT_RATE;
		totalCharges += charges;  // ADD to total
		cout << "\nAdult Membership charges: $" << charges << endl;
		cout << "Running total: $" << totalCharges << endl;
	}
	else if (choice == 2) {
		charges = months * CHILD_RATE;
		totalCharges += charges;  // ADD to total
		cout << "\nChild Membership charges: $" << charges << endl;
		cout << "Running total: $" << totalCharges << endl;
	}
	else if (choice == 3) {
		charges = months * SENIOR_RATE;
		totalCharges += charges;  // ADD to total
		cout << "\nSenior Membership charges: $" << charges << endl;
		cout << "Running total: $" << totalCharges << endl;
	}
}