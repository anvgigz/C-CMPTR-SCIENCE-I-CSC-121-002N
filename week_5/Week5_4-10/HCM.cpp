// HCM.cpp - Implementation file for the Health Club Membership class
// This file contains the actual code for the functions declared in HCM.h
// The double colon (::) means "these functions belong to the HCM class"

#include "HCM.h"           // Include the header so we have access to the class declaration
#include <iostream>        // For console input/output
#include <iomanip>         // For formatting output (setprecision, fixed, showpoint)
using namespace std;       // Use the standard namespace

// IMPLEMENTATION of displayMenu() function
// This runs a loop that displays the menu and processes user choices
void HCM::displayMenu()
{
	// Loop allows user to make multiple menu selections
	for (int i = 0; i < 5; i++)
	{
		// Display the menu options to the user
		cout << "   Health Club Membership Menu\n\n";
		cout << "1. Standard Adult Membership\n";
		cout << "2. Child Membership\n";
		cout << "3. Senior Citizen Membership\n";
		cout << "4. Quit the Program\n\n";
		cout << "Enter your choice: ";
		cin >> choice;  // Store user's choice in the member variable

		// Set the numeric output formatting
		// fixed = no scientific notation
		// showpoint = always show decimal point
		// setprecision(2) = show exactly 2 decimal places
		cout << fixed << showpoint << setprecision(2);

		// Use the menu selection to execute the correct set of actions
		if (choice == 1)
		{
			// Adult membership: $120 per month
			cout << "For how many months? ";
			cin >> months;
			charges = months * ADULT_RATE;  // Calculate total cost
			cout << "\nThe total charges are $" << charges << endl;
		}
		else if (choice == 2)
		{
			// Child membership: $60 per month
			cout << "For how many months? ";
			cin >> months;
			charges = months * CHILD_RATE;  // Calculate total cost
			cout << "\nThe total charges are $" << charges << endl;
		}
		else if (choice == 3)
		{
			// Senior membership: $100 per month
			cout << "For how many months? ";
			cin >> months;
			charges = months * SENIOR_RATE;  // Calculate total cost
			cout << "\nThe total charges are $" << charges << endl;
		}
		else if (choice != 4)
		{
			// If user enters anything other than 1-4, show error message
			cout << "\nThe valid choices are 1 through 4.\n"
				<< "Run the program again and select one of those.\n";
		}
		// If choice == 4, the loop exits and program ends
	}
}

// IMPLEMENTATION of calcCharges() function
// Currently empty - this could be used for additional charge calculations in the future
void HCM::calcCharges()
{
	// TODO: Add any additional charge calculation logic here if needed
}