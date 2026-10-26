#include "NumberAnalyzer.h"
#include <iostream>
using namespace std;


//create a program with a function that accepts three arguments: an integer array, an integer size that indicates how many elements are in the array, and an integer n...

//The function should display all of the numbers in the array that are greater than the number n.



void NumberAnalyzer::displayGreaterThanN(int numbers[], int size, int n)
{
    cout << "Numbers greater than " << n << ": ";

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > n)
        {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;
}