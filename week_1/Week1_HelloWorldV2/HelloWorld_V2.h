#pragma once // this gives a hint to the compiler to include this header file only once in a single compilation

class HelloWorld_V2
{
private:

public:
	void askUser();	//this is a method It needs to be implemented in the source file . It is a public method, so it can be accessed from outside the class.
	void MyAge();

};

// variables and methors are the 2 types of memebers. they can be in either public or private access specifier. public members can be accessed from outside the class, while private members can only be accessed from within the class.