#pragma once

class SoftwareSales {

private:
	const double smallDiscount = .20; // 10-19 items
	const double mediumDiscount = .30; // 20-49 items
	const double largeDiscount = .40; //50 -99 items
	const double largestDiscount = .50; //100 or more items
	const double retailPrice = 199;
	bool menu = true;
public:
	int itemQuantity;
	double discount = 0;
	double totalPrice = 0;
	double priceReduction = 0;

	void displayMenu();

	void calculateDiscount(int itemQuantity, double discount);
};