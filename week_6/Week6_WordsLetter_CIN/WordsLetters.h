#pragma once
#include <string>
using namespace std;

class WordsLetters{
	private:

	public:
		void stringProccessing(); // cin >>

		void sentenceProcessing(); // getline()

		void characterProcessing(); // cin.get()

		void paraProcessing();

		void copyToFile(string arg, int count); // get(), put()

		void readFromFile(); // ifstream

		void copyRandomFileToFile();
};