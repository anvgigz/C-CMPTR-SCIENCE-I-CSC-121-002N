#include "DisplayProfits.h"
#include <iostream>
#include <iomanip>
using namespace std;

DisplayProfits::DisplayProfits(double p)
{
	profit = p;
}

void DisplayProfits::setProfit(double p)
{
	profit = p;
}

double DisplayProfits::getProfit() const
{
	return profit;
}

void DisplayProfits::show() const {
    cout << setw(12)
        << fixed
        << setprecision(4)
        << profit;
}
