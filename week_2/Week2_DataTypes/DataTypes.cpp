#include "DataTypes.h"
#include <iostream> // gives you access to cout and cin
#include <string>  // gives you access to the string class
using namespace std;  // gives you access to cout and cin without having to type std::cout or std::cin

void DataTypes::testDataTypes()
{
	int aNumber = 5;
	double d = 3.14;
	float f1 = 3.15f; // same thing as double but less precision you need the f at the end to tell the compiler it is a float
	char c = 'A';
	string a = "this is my string";
	bool b = true; // true or false
	// these are all local variables, they are created on the stack and destroyed when the function ends

	cout << "variable aNumber, DataTypes, int "
		<< " has value " << aNumber << ", takes "
		<< sizeof(aNumber) << " bytes of memory\n"; // you can also do << sizeof(int)
	cout << "variable d, datatype double "
		<< " has a value " << d << ", takes "
		<< sizeof(d) << " bytes of memory\n"; // you can also do <<sizeof(double)
	cout << "variable f1, Datatype Float "
		<< " has value " << f1 << ", takes "
		<< sizeof(f1) << " bytes of memory\n";
	cout << "variable c, Datatype char "
		<< " has value " << c << ", takes "
		<< sizeof(c) << " bytes of memory\n";
		

	cout << "variable a, Datatype string "
		<< " has value " << a << ", takes "
		<< sizeof(a) << " bytes of memory\n"
		<< a.size() << " using a.size() gives the same info\\\n";

	cout << "variable b, Datatype boolean "
		<< " has value " << b << ", takes "
		<< sizeof(b) << " bytes of memory\n";
}
