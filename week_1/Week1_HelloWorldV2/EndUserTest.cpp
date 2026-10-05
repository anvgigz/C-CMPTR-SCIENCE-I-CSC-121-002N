#include "HelloWorld_V2.h"

int main()
{
	HelloWorld_V2 h; //create an object of the class HelloWorld_V2. This is called instantiation. The object h is created in the stack memory. The constructor of the class is called when the object is created.
	h.askUser(); //call the method askUser() of the class HelloWorld_V2. The method is called using the object h
	h.MyAge();

	return 0;
}