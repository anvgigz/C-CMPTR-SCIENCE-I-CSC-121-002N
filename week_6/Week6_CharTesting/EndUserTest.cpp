#include <iostream>

using namespace std;

int main()
{
	char c = '\0';
	do
	{
		cout << "Enter a character and I'll tell you type of char: ";
		cin.get(c);
		cin.ignore();  // Clear the newline from the buffer

		if (isalpha(c))
		{
			cout << "\n You entered a character. \n";
		}
		if (isdigit(c))
		{
			cout << "\n You entered a digit. \n";
		}
		if (isalnum(c))
		{
			cout << "\n you entered a digit or character";
		}
		if (islower(c))
		{
			cout << "\n You entered a lowercase character. \n";
		}
		if (isprint(c))
		{
			cout << "\n You entered a printable character. \n";
		}
		if (ispunct(c))
		{
			cout << "\n You entered a punctuation character. \n";
		}
		if (isupper(c))
		{
			cout << "\n You entered an uppercase character. \n";
		}
		if (isspace(c))
		{
			cout << "\n You entered a whitespace character. \n";
		}
		cout << "Enter another character (Y/N): ";
		cin >> c;
	} while (toupper(c) == 'Y');
	


	return 0;
}