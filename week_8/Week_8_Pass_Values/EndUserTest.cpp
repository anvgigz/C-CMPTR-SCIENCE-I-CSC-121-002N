#include "PassValues.h"
#include <iostream>
using namespace std;

int main() {

	PassValue p;

	cout << "enter a number to pass by value: ";
	int value;
	cin >> value;
	int newfoo1Value = -1;
	newfoo1Value = p.foo1(value);  // pass by value, 
	//the value of the variable is copied
	// to the parameter of the method foo1

	cout << newfoo1Value << " is the new value passed by value" << endl;

	int newfoo2Value = -1;
	newfoo2Value = p.foo2(newfoo1Value); // pass by reference - modifies value directly

	cout << "foo2: value is " << newfoo2Value << endl << endl; // 6

	p.foo3(&value);
	//memory address of value is passed to foo3,
	// so foo3 can modify the value directly
	// memory address changes with each run of the program,
	// so it is not a good idea to hard code the address of a variable in the code
	cout << "foo3: value is " << value << endl << endl; // 6
	cout << "foo3: address of value is " << &value << endl << endl; // 6

	cout << "Enter three numbers to pass by value: ";
	int a, b, c;
	cin >> a >> b >> c;
	p.foo8(a, b, c); // pass by value, the values of the variables are copied

	return 0;

}