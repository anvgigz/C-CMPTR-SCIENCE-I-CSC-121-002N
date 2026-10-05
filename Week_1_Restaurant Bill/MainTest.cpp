#include "Bill.h"
#include <iostream>

int main()
{
    BillCalculator myBill;
    double price;

    std::cout << "Enter the meal charge: $";
    std::cin >> price;

    myBill.setMealCharge(price);
    myBill.calculateBill();

    return 0;
}
