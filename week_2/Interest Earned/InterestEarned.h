#pragma once
#include <iomanip>
#include <iostream>

class InterestEarned
{
private:
	double interestrate;
	double timesCompounded;
	double principal;

public:
    // Constructor to set up the account data
    InterestEarned(double p, double rate, int t);

    // Math functions
    double getFinalBalance() const;
    double getInterestEarned() const;

    // Getters to retrieve the original data for the report
    double getPrincipal() const;
    double getInterestRate() const;
    int getTimesCompounded() const;
	
};
