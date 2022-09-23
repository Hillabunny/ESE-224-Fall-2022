#include "WaterLevelMonitor.h"
#include <iostream>


using namespace std;

int main()
{
	WaterLevelMonitor monitor = WaterLevelMonitor();
	float level;

	
	for (int i = 0; i < 10;) //counter loop
	{
		cout << "input the " << i + 1 << "th data: " << endl;


		cout << "Enter current water level: ";
		cin >> level;
		monitor.receiveData(level);

		cout << "====" << endl;

		cout << "Current water level: ";
		cout << monitor.getCurrentlevel() << endl;

		cout << "Highest water level: ";
		cout << monitor.getHighestlevel() << endl;

		cout << "Lowest water level: "; 
		cout << monitor.getLowestlevel() << endl;

		cout << "Average water level: ";
		cout << monitor.getAveragelevel() << endl;
		cout << endl;
	
		i++;

		cout << "Total data collected: " << i << endl << endl;
		cout << "====" << endl;
	}
		system("pause");
		return 0;
	}
