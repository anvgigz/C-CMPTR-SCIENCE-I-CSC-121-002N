#include "FDTConversion.h"
#include <iostream>
#include <iomanip>       // Header file needed to use stream manipulators setprecision and setw
using namespace std;

void FDTConversion::salesFigures()
{
	double days[3] = { 0 };
	// double day1, day2, day3, total;

	// Get the sales for each day
	
	//cin >> days[0];
	//cout << "Enter the sales for day 2: ";
	//cin >> days[1];
	//cout << "Enter the sales for day 3: ";
	//cin >> days[2];

	// Calculate total sales
	for (int i = 0; i < 3; i++) {
		cout << "Enter the sales for day" << i + 1 << ": $";
		cin >> days[i];
		total += days[i];
	}
	// Display the sales figures
	cout << "\nSales Figures\n";
	cout << "-------------\n";
	cout <<  fixed << showpoint <<setprecision(2);
	
	for (int i = 0; i < 3; i++) {

		cout << "Day" << i + 1 << ": " << setw(17) << "$" << right << days[i] << endl;
	}



	cout << "Total: " << setw(16) << right << "$" << total << endl;
}

void FDTConversion::calcAverage()
{
	double salesAverage = -1;

	salesAverage = total / 3;

	cout << fixed << showpoint << setprecision(2);
	cout << "Average Sales: " << setw(8) << right << "$" << salesAverage << endl;
}
