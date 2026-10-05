#pragma once
#include <iostream>
#include <iomanip>

class BillCalculator
{
private:
    

public:
    BillCalculator();
    void setMealCharge(double price);
    void calculateBill();
    double mealCharge;
    double taxRate;
    double tipRate;
};
