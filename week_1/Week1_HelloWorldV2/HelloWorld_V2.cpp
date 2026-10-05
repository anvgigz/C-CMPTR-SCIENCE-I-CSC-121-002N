#include "HelloWorld_V2.h"  //take the contents of the header file and paste it here. This is called preprocessor directive. 
#include <iostream>							//It is used to include the contents of the header file in the source file. The header file contains 
using namespace std;							// the class definition, while the source file contains the implementation of the class methods.

void HelloWorld_V2::askUser()    // :: means scope resolution operator. It is used to define the method of the class. It tells the compiler that the method askUser() belongs to the class HwlloWorld_V2.
{
	string MyName;  // create variable MyName from datatype string

	cout << "hello . im asking you for your name. please enter your name: " << endl;	//cout is used to print the message to the console. It is an object of the ostream class. It is used to output data to the console.
	cin >> MyName;
	cout << "Nice to meet You, " << MyName << " nice to meet you" << endl;// variables are what store data. They are used to store data in the memory. 
		// int,,, double, char, bool, string
		// variables are recognized by thier data type 

	
}

void HelloWorld_V2::MyAge()
{
	int age; // create an integer variable to store the age
	cout << "How old are you? please enter your age: ";
	cin >> age; // receive input from the user
	cout << "you are " << age << " years old." << endl;
}
