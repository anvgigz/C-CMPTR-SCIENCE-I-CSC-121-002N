#include "SalesTax.h"  // access to sales tax class
#include <iostream> // cout object
#include <iomanip> // setprecision, showpoint, fixed
using namespace std;

void SalesTax::calcDisplay()
{
	double purchasePrice = 95.00;
	double stateSalesTax = 6.5; //precent
	double countySalesTax = 2.0; //percent

		double stateSalesTaxAmount = 0.0; // declared variable now is usable
		double countySalesTaxAmount = 0.0; //declared variable is now usable
		double totalTax = 0.0; //declared variable is now usable
		double totalPrice = 0.0; //declared variable is now usable
		
		cout << showpoint << fixed << setprecision(2); // showpoint, fixed, and setprecision are used to format the output to 2 decimal places
	cout << "Purchase Price is $" << purchasePrice << endl;

	stateSalesTaxAmount = purchasePrice * (stateSalesTax / 100); // in order to get stateSalesTaxAmount to work
																 //you must first declare it in the SalesTax.h file as a private variable
	countySalesTaxAmount = purchasePrice * (countySalesTax / 100); // in order to get countySalesTaxAmount to work
																 //you must first declare it in the SalesTax.h file as a private variable	

	totalTax = stateSalesTaxAmount + countySalesTaxAmount;

	cout << "Total tax is $" << totalTax << endl;

	totalPrice = purchasePrice + totalTax;

	cout << "Total price is $" << totalPrice << endl;

	cout << "\n\nuse \\a \a_to make the computer beep" << endl; // \a is used to make the computer beep
}
