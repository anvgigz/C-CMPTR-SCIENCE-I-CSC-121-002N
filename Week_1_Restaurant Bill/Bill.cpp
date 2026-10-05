#include "Bill.h"

BillCalculator::BillCalculator()
{
    taxRate = 0.0675;
    tipRate = 0.15;
    mealCharge = 0.0;
}

void BillCalculator::setMealCharge(double price)
{
    mealCharge = price;
}

void BillCalculator::calculateBill()
{
    double taxAmount = mealCharge * taxRate;
    double tipAmount = (mealCharge + taxAmount) * tipRate;
    double totalBill = mealCharge + taxAmount + tipAmount;

    
    std::cout << "Meal cost: $" << mealCharge << std::endl;
    std::cout << "Tax amount: $" << taxAmount << std::endl;
    std::cout << "Tip amount: $" << tipAmount << std::endl;
    std::cout << "Total bill: $" << totalBill << std::endl;
}
