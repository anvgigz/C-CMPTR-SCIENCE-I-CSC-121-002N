#include "DisplayProfits.h"
#include <iostream>

using namespace std;

int main() {
    double revenue;
    double taxRate = 0.20; // Let's pretend taxes are 20%

    // 1. Get input from the user
    cout << "Enter your total revenue: $";
    cin >> revenue;

    // 2. Do the math (multiply by tax rate to find taxes, then subtract)
    double taxes = revenue * taxRate;
    double finalProfit = revenue - taxes;

    // 3. Create the object using the newly calculated final profit
    DisplayProfits myProfit(finalProfit);

    // 4. Display the formatted result using your class
    cout << "Profit after 20% tax is: $";
    myProfit.show();

    cout << endl;
    return 0;
}