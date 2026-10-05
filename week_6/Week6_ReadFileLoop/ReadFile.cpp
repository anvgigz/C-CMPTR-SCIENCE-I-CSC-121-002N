#include "ReadFile.h"
#include <iostream>
#include <fstream> //ifstream ofstream fstream
// i = input, o = output, f = file
// use ios::app to append to a file, ios::trunc to overwrite a file,
// ios::in to read from a file, ios::out to write to a file
using namespace std;
//Total and average rainfall.. 
 //read a file the  rainfall.txt file loop through each month and corresponding rainfall.. Add up the  rainfall as a total sum. Also get the average rainfall. 
 //then cout  during the months of << month << “to” <<month<<  the total rainfall was” << total << “and the average rainfall was << average << endl; 

void ReadFile::ReadFileLoop() {
	double total = 0;
	double average = 0;
	int count_numbers = 0;
	double rainfall = 0;

	string month[2] = { "null", "null" };
	try {
		ifstream inputFile("rainfall.txt");
		inputFile.exceptions(ifstream::failbit | ifstream::badbit);

		if (!inputFile.is_open()) {
			cout << "Error opening file!" << endl;
			return;
		}

		// Read the two month names
		inputFile >> month[0] >> month[1];
		cout << "Months: " << month[0] << " and " << month[1] << endl;

		// Read all the rainfall numbers
		while (inputFile >> rainfall) {
			total += rainfall;
			count_numbers++;
			cout << "Rainfall: " << rainfall << endl;
		}

		// Calculate average
		if (count_numbers > 0) {
			average = total / count_numbers;
			cout << "\nTotal: " << total << endl;
			cout << "Count: " << count_numbers << endl;
			cout << "Average: " << average << endl;
		}

		inputFile.close();
	}
	catch (exception& e) {
		cout << "Error: " << e.what() << endl;
	}
}