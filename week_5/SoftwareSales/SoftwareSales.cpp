#include "SoftwareSales.h"
#include <iostream>
#include <iomanip>
using namespace std;

void SoftwareSales::displayMenu()
{
	cout << "Welcome to the Software Sales Program!" << endl;
	cout << "Please select the quantity of software packages you would like to purchase:" << endl;
	cin >> itemQuantity;

	if (itemQuantity < 0)
	{
		cout << "Invalid quantity. Please enter a positive number." << endl;
	}
	else if (itemQuantity >= 0 && itemQuantity < 10)
	{
		cout << "You have selected " << itemQuantity << " items." << endl;
		cout << "No discount will be applied." << endl;
		discount = 1;
		calculateDiscount(itemQuantity, discount);
	}
	else if (itemQuantity >= 10 && itemQuantity < 20)
	{
		cout << "You have selected " << itemQuantity << " items." << endl;
		cout << "A discount of 20% will be applied." << endl;
		discount = smallDiscount;
		calculateDiscount(itemQuantity, discount);
	}
	else if (itemQuantity >= 20 && itemQuantity < 50)
	{
		cout << "You have selected " << itemQuantity << " items." << endl;
		cout << "A discount of 30% will be applied." << endl;
		discount = mediumDiscount;
		calculateDiscount(itemQuantity, discount);
	}
	else if (itemQuantity >= 50 && itemQuantity < 100)
	{
		cout << "You have selected " << itemQuantity << " items." << endl;
		cout << "A discount of 40% will be applied." << endl;
		discount = largeDiscount;
		calculateDiscount(itemQuantity, discount);
	}
	else if (itemQuantity >= 100)
	{
		cout << "You have selected " << itemQuantity << " items." << endl;
		cout << "A discount of 50% will be applied." << endl;
		discount = largestDiscount;
		calculateDiscount(itemQuantity, discount);
	}
}
void SoftwareSales::calculateDiscount(int quantity, double discount)
{
	priceReduction = (quantity * retailPrice * discount);
	totalPrice = (quantity * retailPrice) - priceReduction;
	cout << "The total price after discount is: $" << fixed << setprecision(2) << totalPrice << endl;
}
