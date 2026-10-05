#include "RandNumGen.h"
#include <iostream>

#include <cstdlib> // rand(), srand()
using namespace std;

void RandNumGen::generateRNs()
{	
	// generate three random numbers
	
	//int n1 = -1, n2 = -1, n3 = -1;

	//this is an array VVVVVV
	int n[20] = {-1}; // //create 20 int variables and initialize all of them to -1
	// n[0], n[1], n[2], n[3], n[4], n[5], n[6], n[7], n[8], n[9], n[10], n[11], n[12], n[13], n[14], n[15], n[16], n[17], n[18], n[19]
	// 20 variables in total the array is named n
	int seed = -1;
	int minValue = 100, maxValue = 200;
	
	seed = time(0);
	srand(seed);

	for (int i = 0; i < 20; i++)
	{
		n[i] = (rand() % (maxValue - minValue + 1)) + minValue;

	}
	cout << "Random Numbers Generated are \n" << endl;
	
	for (int i = 0; i < 20; i++)
	{
		cout << "N" << i << " : " << n[i] << endl;
	}
	//for (int i = 0; i < 20; i++)
	//{
	//	
	//	cout << "n[i] = " << n[i] << endl;
	//		
	//}

	//n[0] = (rand() % (maxValue - minValue + 1)) + minValue;
	//n[1] = (rand() % (maxValue - minValue + 1)) + minValue;;
	//n[2] = (rand() % (maxValue - minValue + 1)) + minValue;
	// 
	// 
	//n1 = (rand() % (maxValue - minValue + 1)) + minValue;
	//n2 = (rand() % (maxValue - minValue + 1)) + minValue;;
	//n3 = (rand() % (maxValue - minValue + 1)) + minValue;


	

	//cout << "Random Numbers Generated are \n"
	//	<< "n1 or n[0] = " << n[0] << endl
	//	<< "n2  or n[1] = " << n[1] << endl
	//	<< "n3  or n[2] = " << n[2] << endl;


	cout << "seed used is " << seed << endl;

}
