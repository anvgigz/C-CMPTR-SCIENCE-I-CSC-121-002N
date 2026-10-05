#include "WordsLetters.h"
#include <iostream> // cin, cout, objects
#include <string> // getline(), string object

#include <fstream> //ifstream() ofstream() fstream() file stream objects
				   // i = input , o = output, f = file "can do both"


using namespace std;

void WordsLetters::stringProccessing()
{
	string word[3] = { " ", " ", " " };

	cout << "Enter three words: ";
	
	for (int i = 0; i < 3; i++)
	{
		cin >> word[i];
		cout << "You entered: " << word[i] << endl;
	}
	cout << "\nAll words entered: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << word[i] << endl;
	}
}

void WordsLetters::sentenceProcessing()
{
	string sentence = " ";
	char letter = '\0'; // null character, 
	//					used to initialize a char variable

	cout << "Enter a sentence: ";
	getline(cin, sentence); // two args needed, first is the input stream, 
							//second is the string object to store the input
							// until '\n' >>(enter key) is encountered
	cout << "The sentence you typed is: \n"
		 << sentence << endl;
	// Find the number of particular characters in the sentence
	cout << "Enter the letter you'd like to count: ";
	cin >> letter; //letter to search for in the sentence

	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] == letter)
		{
			cout << "The letter " << letter << 
				" is found at index: " << i << endl;

		}
	}
}

void WordsLetters::characterProcessing()
{
	char c = '\0'; // null character,

	cout << "Enter a character: \n";
	cin.get(c); // reads a single character from the input
				//stream
	while(c != '\n') // check if the character is not
					 //  a newline
	{
		cout.put(c); // write the character to the output stream
		cin.get(c); // read the next character
	}
	
}

void WordsLetters::paraProcessing()
{
	char c = '\0';
	int counter = 0;
	string paragraph = "";

	cout << "Enter a paragraph (end with #): \n";
	cin.get(c); // read first character

	while (c != '#') // continue until # is entered
	{
		paragraph += c; // store character in string
		cout.put(c);    // echo character to console
		cin.get(c);     // read next character
		counter++;        // increment character count
	}

	copyToFile(paragraph, counter);  // Pass the entire paragraph string
	cout << "\n\nThe paragraph you entered is: \n" << paragraph << endl;
}



void WordsLetters::copyToFile(string arg, int count)
{
	// Read a paragraph from console ending with # sentinel 
	// Echo it back to myParagraph.txt

	// Count newlines in the paragraph FIRST
	int lineCount = 1;  // At least 1 line
	for (int i = 0; i < arg.length(); i++)
	{
		if (arg[i] == '\n')
		{
			lineCount++;
		}
	}

	// Check if paragraph is empty
	if (arg.empty())
	{
		cout << "WARNING: Paragraph is empty, nothing to write!" << endl;
		return;
	}

	try
	{
		// Create an output file stream object
		// If the file does not exist it will be created
		ofstream outFile("myParagraph.txt", ios::app);
		outFile.exceptions(ofstream::failbit | ofstream::badbit);

		// Write paragraph to file
		outFile << arg << "\n";
		
		outFile.close();

		// Display success messages
		cout << "\ntest: copyToFile(arg)\n\n " << arg << "\n\n this ran" << endl;
		cout << "Character count written: " << count << endl;
		cout << "Lines written: " << lineCount << endl;
	}
	catch (ofstream::failure e)
	{
		cout << "ERROR: Could not write to file!" << endl;
		cout << "Reason: " << e.what() << endl;
		cout << "Make sure the file is not open in another program." << endl;
	}
	catch (exception e)
	{
		cout << "ERROR: An unexpected error occurred!" << endl;
		cout << "Reason: " << e.what() << endl;
	}
	readFromFile();
}

void WordsLetters::readFromFile()
{
	string fileContent = "";
	char c;

	try
	{
		ifstream inFile("myParagraph.txt");

		if (!inFile.is_open())
		{
			cout << "ERROR: Could not open file!" << endl;
			return;
		}

		// Read entire file character by character
		while (inFile.get(c))
		{
			fileContent += c;
		}

		cout << "\n=== Contents of myParagraph.txt ===" << endl;
		cout << fileContent << endl;
		cout << "=== End of file ===" << endl;

		inFile.close();
	}
	catch (exception e)
	{
		cout << "ERROR: Could not read file!" << endl;
		cout << "Reason: " << e.what() << endl;
	}
	copyRandomFileToFile();
}

//void WordsLetters::copyRandomFileToFile()
//{
//	string paragraph = "";
//	char c;
//	int counter = 0;
//
//	cout << "\nStarting to read randomFile.txt..." << endl;
//
//	try
//	{
//		// Open randomFile.txt for reading
//		ifstream inFile("randomFile.txt");
//
//		if (!inFile.is_open())
//		{
//			cout << "ERROR: Could not open randomFile.txt!" << endl;
//			return;
//		}
//
//		cout << "randomFile.txt opened successfully!" << endl;
//
//		// Read entire file character by character
//		while (inFile.get(c))
//		{
//			paragraph += c;
//			cout.put(c);
//			counter++;
//		}
//
//		cout << "\n\nFinished reading. Characters read: " << counter << endl;
//		inFile.close();
//	}
//	catch (exception e)
//	{
//		cout << "ERROR: Could not read from randomFile.txt!" << endl;
//		cout << "Reason: " << e.what() << endl;
//		return;
//	}
//
//	// Check if paragraph is empty
//	if (paragraph.empty())
//	{
//		cout << "WARNING: randomFile.txt is empty, nothing to write!" << endl;
//		return;
//	}
//
//	// Count newlines in the paragraph
//	int lineCount = 1;  // At least 1 line
//	for (int i = 0; i < paragraph.length(); i++)
//	{
//		if (paragraph[i] == '\n')
//		{
//			lineCount++;
//		}
//	}
//
//	try
//	{
//		// Append to myParagraph.txt
//		ofstream outFile("myParagraph.txt", ios::app);
//
//		if (!outFile.is_open())
//		{
//			cout << "ERROR: Could not open myParagraph.txt for writing!" << endl;
//			return;
//		}
//
//		outFile << paragraph << "\n";
//		outFile.close();
//
//		// Display success messages
//		cout << "\n*** File appended successfully! ***" << endl;
//		cout << "Character count written: " << counter << endl;
//		cout << "Lines written: " << lineCount << endl;
//	}
//	catch (exception e)
//	{
//		cout << "ERROR: Could not write to myParagraph.txt!" << endl;
//		cout << "Reason: " << e.what() << endl;
//		return;
//	}
//}


void WordsLetters::copyRandomFileToFile()
{
	int total = 0;
	char c;


	cout << "\nStarting to read MyNumbers.txt..." << endl;

	try
	{
		// Open MyNumbers.txt for reading
		ifstream inFile("MyNumbers.txt");

		if (!inFile.is_open())
		{
			cout << "ERROR: Could not open MyNumbers.txt!" << endl;
			return;
		}

		cout << "MyNumbers.txt opened successfully!" << endl;

		// Read entire file character by character
		while (inFile.get(c))
		{
			total += c;
			cout.put(c);

		}

		cout << "\n\nFinished reading. The total of the # are: " << total << endl;
		inFile.close();
	}
	catch (exception e)
	{
		cout << "ERROR: Could not read from randomFile.txt!" << endl;
		cout << "Reason: " << e.what() << endl;
		return;
	}

	// Check if total is zero
	if (total == 0)
	{
		cout << "WARNING: MyNumbers.txt is empty, nothing to write!" << endl;
		return;
	}

	

	try
	{
		// Append to RandomFileNew.txt
		ofstream outFile("RandomFileNew.txt", ios::app);

		if (!outFile.is_open())
		{
			cout << "ERROR: Could not open RandomFileNew.txt for writing!" << endl;
			return;
		}

		outFile << total << "\n";
		outFile.close();

		// Display success messages
		cout << "\n*** File appended successfully to RandomNewFile.txt! ***" << endl;
		
	}
	catch (exception e)
	{
		cout << "ERROR: Could not write to RandomFileNew.txt!" << endl;
		cout << "Reason: " << e.what() << endl;
		return;
	}
}
