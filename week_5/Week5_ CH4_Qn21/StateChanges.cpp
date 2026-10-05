#include "StateChanges.h"
#include <iostream>

using namespace std;

void StateChanges::setTemperature()
{
	cout << "Enter the temperature: ";
	cin >> temperature;
	stateChanges(temperature);
}

void StateChanges::stateChanges(float temperature)
{
	if (temperature <= -362)
	{
		cout << "At this temperature: " << temperature << "\n"
			<< "Ethyl alcohol froze at -173 degrees Fahrenheight."
			<< "Mercury froze at -38 degrees Fahrenheight."
			<< "Oxygen froze at -362 degrees Fahrenheight."
			<< "Water froze at 32 degrees Fahrenheight." << endl;
	}
	else if (temperature <= -173)
	{
		cout << "At this temperature: " << temperature << "\n"
			<< "Ethyl alcohol froze at -173 degrees Fahrenheight."
			<< "Mercury froze at -38 degrees Fahrenheight."
			<< "Water froze at 32 degrees Fahrenheight." << endl;
	}
	else if (temperature <= -38)
	{
		cout << "At this temperature: " << temperature << "\n"
			<< "Mercury froze at -38 degrees Fahrenheight."
			<< "Water froze at 32 degrees Fahrenheight." << endl;
	}
	else if (temperature <= 32)
	{
		cout << "At this temperature: " << temperature << "\n"
			<< "Water froze at 32 degrees Fahrenheight." << endl;
	}
	else
	{
		cout << "No substances froze at this temperature." << endl;
	}


	if (temperature >= 676)
	{
		cout << "At this temperature: " << temperature << "\n"
			<< "Ethyle alcohol boiled at 172 degrees Fahrenheight."
			<< "Mercury boiled at 676 degrees Fahrenheight."
			<< "Oxygen boiled at -306 degrees Fahrenheight."
			<< "Water boiled at 212 degrees Fahrenheight." << endl;
	}
	else if (temperature >= 212)
	{
		cout << "At this temperature: " << temperature << "\n"
			<< "Ethyle alcohol boiled at 172 degrees Fahrenheight."
			<< "Oxygen boiled at -306 degrees Fahrenheight."
			<< "Water boiled at 212 degrees Fahrenheight." << endl;
	}
	else if (temperature >= 172)
	{
		cout << "At this temperature: " << temperature << "\n"
			<< "Ethyle alcohol boiled at 172 degrees Fahrenheight."
			<< "Oxygen boiled at -306 degrees Fahrenheight." << endl;
	}
	else if (temperature >= -306)
	{
		cout << "At this temperature: " << temperature << "\n"
			<< "Oxygen boiled at -306 degrees Fahrenheight." << endl;
	}
	else if (temperature <= -305)
	{
		cout << "No substances boiled at this temperature." << endl;
	}
}
