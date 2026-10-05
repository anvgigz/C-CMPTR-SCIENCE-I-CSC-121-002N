#include "NestedLoop_2DMatrix.h"
#include <iostream>
#include <fstream> // for file input/output
			      // i = input(readtext), o = output(write), f = file, s = stream
using namespace std;

void NestedLoop_2DMatrix::readMatrix()
{
	

	// create stream to file, 
	// open the file, check if the file is open
	// read the data, close the file
	ifstream inFile; //Step 1
	inFile.open("MatrixData.txt"); //Step 2)    // alt method for 1,2------- ifstream inFile(“MatrixData.txt”)
	
	
	cout << "First matrix values" << endl;

	//Read the data using nested loops
	for (int i = 0; i < 5; i++) // outter loop for rows
	{
		for (int j = 0; j < 6; j++) // inner loop for columns
		{
			inFile >> matrix[i][j]; // read the data from the file into the array
			cout << matrix[i][j] << " ";
			
		}
		
		cout << endl; // display a new line in the console

	}
	
	cout << matrix << "\nthis outputs the Hex value for the first value\n" << endl; // display the Hexidecimal address of the first element of the array

	inFile.close(); // close the file
	
}

void NestedLoop_2DMatrix::doubleMatrix() {
	ofstream outFile("answer.txt"); // create stream to file, open the file, check if the file is open

	cout << "second matrix values" << endl;

	for (int i = 0; i < 5; i++) // outter loop for rows
	{
		for (int j = 0; j < 6; j++) // inner loop for columns
		{
			outFile << 2 * matrix[i][j] << " "; // write the data to the file, double the value of the array element

			cout << matrix[i][j] << " ";
			
		}
		cout << endl; // display a new line in the console
		outFile << endl; // display a new line answer.txt file \n
	}
	
	outFile.close(); // close the file

		
}

void NestedLoop_2DMatrix::wrapUp()
{a
	cout << "\nThe final matrix values" << endl;
	cout << "========================" << endl;
	int word_count = 0; // initialize word count to 0
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << matrix[i][j] << " ";
			word_count++;
		}
		cout << endl;
		
	}
	cout << "\nThe total number of words in the matrix is: " << word_count << endl;
	cout << "Thank you for your attention!" << endl;
}
