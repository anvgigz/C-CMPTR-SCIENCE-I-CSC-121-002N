#pragma once

class NestedLoop_2DMatrix
{
private:
	int matrix[5][6] = { 0 }; // 5 rows and 6 columns
	// int matrix[30] = { 0 }; 1 row and 30 columns

public:
	void readMatrix(); //read a 2D matrix into a 2D array
	void doubleMatrix(); //double the values of a 2D array

	void wrapUp();
};

