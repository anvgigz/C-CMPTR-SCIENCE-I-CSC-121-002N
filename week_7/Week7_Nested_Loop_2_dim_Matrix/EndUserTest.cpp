#include "NestedLoop_2DMatrix.h"

int main()
{
	NestedLoop_2DMatrix matrixObj; // create an object of the class
	matrixObj.readMatrix(); // call the function to read the matrix

	matrixObj.doubleMatrix(); // call the function to double the matrix

	matrixObj.wrapUp(); // call the function to wrap up

	return 0;
}