#pragma once

class DisplayProfits {
private:
	double profit = -1;

public:
	DisplayProfits(double p);

	void setProfit(double p);
	double getProfit() const; //const placed after the function declaration to indicate that it does not modify any member variables of the class.

	void show() const; //const placed after the function declaration to indicate that it does not modify any member variables of the class.
	
};