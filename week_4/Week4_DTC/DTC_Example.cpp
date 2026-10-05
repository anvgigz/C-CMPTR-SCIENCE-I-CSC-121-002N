#include "DTC_Example.h"
#include <iostream>
#include <iomanip>
using namespace std;

void DTC_Example::funnyDivision()
{
				//int x = 5, y = 2;
				//int z = -1;
				//double z1 = -1.0;
				//int x1 = 64;
	int x[5] = {35, 36, 38, 33, 35};
	int x1 = 7;
	char c[4] = { 'A', 'B', 'C', 'D'};
				//z = x / y; 
				//z1 = x / y;

				//cout << "z = " << z << endl;
				//cout << "z1 = " << z1 << endl;  // truncated result 2
				//
				//cout << fixed << showpoint << setprecision(4);

				//cout << "z1 = " << z1 << endl; // now not a truncated rewsult 2.0000 still missing 2.5
	 
				//z1 = static_cast<double>(x / y); // Cast to double to get a floating-point result

				//cout << "z1 = " << z1 << endl; // still missing 2.5

				//z1 = static_cast<double>(x) / y; // if you switch the static_cast x / static_cast(y); you get the correct result still
				//cout << "z1 = " << z1 << endl; // now 2.5000
				//cout << " here is the fix --- z1 = static_cast<double>(x) / y;" << endl;

				//cout << "x1 = " << x1 << endl;
				//cout << "x1 = " << static_cast<char>(x1) << endl; // 64 is @ in ASCII
	for (int i = 0; i < 5; i++) {
		cout << "x[i] = " << static_cast<char>(x[i]) << "\n";
		//cout << "x[i] = " << static_cast<char>(x1) << "\n"; // 7 is the bell sound for windows

	}
	cout << endl;

	for (int i = 0; i < 4; i++) { // change i < 5 to for otherwise you will get ╠ as the last character in the output
		cout << c[i] << "\n";

	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		cout << static_cast<int>(c[i]) << "\n";

	}
	cout << endl;
}

void DTC_Example::quizAscii()
{
	// 1) Print lowercase letters using int -> char static_cast (ASCII 97..122)
	cout << "Lowercase letters a..z:\n";
	for (int code = 97; code <= 122; ++code) {
		char ch = static_cast<char>(code);
		cout << code << " -> " << ch << '\n';
	}
	cout << '\n';

	// 2) Array of 5 uppercase letters and print their lowercase equivalents
	char upper[5] = { 'A', 'B', 'X', 'Y', 'Z' };
	cout << "Upper -> Lower mapping for 5 letters:\n";
	constexpr int diff = 'a' - 'A'; // ASCII difference
	for (char u : upper) {
		char lower = static_cast<char>(u + diff);
		cout << u << " -> " << lower << '\n';
	}
	cout << endl;

}

