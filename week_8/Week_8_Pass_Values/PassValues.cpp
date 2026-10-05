#include "PassValues.h"
#include <iostream> // for cout
using namespace std;

int PassValue::foo1(int n)
{
	int n1;
	n1 = 10 * n;
	cout << "Pass by Value n is " << n << " and n1 is " << n1 << endl;
	return n1;
}

int PassValue::foo2(int& n)
{
	n = 10 * n;
	cout << "Pass by Reference n is " << n << endl;
	return n;
}

void PassValue::foo3(int* n)
{
	cout << "Pass by Pointer n (memory address) " << n << endl;
	cout << "Pass by Pointer *n (dereferece n) " << *n << endl; // dereference n
	*n = 10 * (*n); // first * is multiple, second * is dereference
	cout << "n has memory address,  " << n << endl;
	cout << "where the value stored is " << *n << endl;
}

void PassValue::foo8(int a, int b, int c)
{

	int multi_arg = 0;
	multi_arg += a * b * c;
	cout << "Pass by Value a is " << a << ", b is " << b << ", c is " << c << endl;
	cout << multi_arg << " is the value of multi_arg" << endl;
	cout << " since this is a void and not a return type,"
		"the value of multi_arg is not capable of returning a value." << endl;


};
//
//char PassValue::foo4(char c)
//{
//	return 0;
//}
//
//char& PassValue::foo5(char c)
//{
//	// TODO: insert return statement here
// return 0;
//}
//
//char* PassValue::foo6(char c)
//{
//	return nullptr;
//}


