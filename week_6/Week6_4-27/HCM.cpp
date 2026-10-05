#include "HCM.h"
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

void HCM::displayMenu()
{
	do {
		// Display the menu and get the user's choice
		cout << "   Health Club Membership Menu\n\n";
		cout << "0. All Memberships\n";
		cout << "1. Standard Adult Membership\n";
		cout << "2. Child Membership\n";
		cout << "3. Senior Citizen Membership\n";
		cout << "4. Quit the Program\n\n";
		cout << "Enter your choice: ";
		cin >> choice;
		
	

	} while (choice < 0 || choice > 4);
calcHCM(choice);
}

void HCM::calcHCM(int choice)
{
	// Validate and process the menu choice
	if (choice >= 0 && choice <= 3)
	{
		cout << "For how many months? ";
		cin >> months;

		// Set charges based on user input
		switch (choice)  //only int values work in switch statements.. also char converterted with ASCII values
		{
		case 0: charges = months * ADULT_RATE;
			charges += months * CHILD_RATE;
			charges += months * SENIOR_RATE;
			break;
		case 1:	charges = months * ADULT_RATE;
			break;
		case 2:	charges = months * CHILD_RATE;
			break;
		case 3:	charges = months * SENIOR_RATE;
			break;
		}
		// Display the monthly charges
		cout << fixed << showpoint << setprecision(2);
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice != 4)
	{
		cout << "The valid choices are 1 through 4.\n";
		cout << "Run the program again and select one of these.\n";
	}
}
