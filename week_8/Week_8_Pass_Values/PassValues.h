#pragma once


class PassValue {
	private:


	public:
		int foo1(int n); //pass by value

		int foo2(int& n); //pass by reference

		void foo3(int* n); // pass by pointer gives access to the 
						   //memory address of the variable

		void foo8(int a, int b, int c); //pass by value

		//char foo4(char c); //return by value

		//char& foo5(char c); //return by reference

		//char* foo6(char c); //return by pointer

		//char& foo7(char& c); //return by reference

		//char* foo8(char* c); //return by pointer

		


};
//
//How to pass data into methods of a class ?
//
//1. Pass data by value // copy argument to a  parameter
//
//2. Pass data by reference // reference the memory where argument is stored, do not copy arg to parameter, &
//
//3. Pass data by pointers // reference the memory where argument is stored, do not copy arg to parameter, *
//
//
//
//
//
//How to return data from methods called ?
//
//1. Return data by value // copy parameter to an argument
//
//2. Return data by reference // reference the memory where parameter is stored, do not copy parameter to arg, &
//
//3. Return data by pointers // reference the memory where parameter is stored, do not copy parameter to arg, *