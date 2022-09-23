#include <iostream>
#include <math.h>
#include "WaterLevelMonitor.h"

using namespace std;

WaterLevelMonitor::WaterLevelMonitor() //defining function from WaterLevelMonitor (::WaterLevelMonitor() is the constructor)
{
	CurrentLevel = -1.0;
	AverageLevel = -1.0;
	HighestLevel = -1.0;
	LowestLevel = -1.0;
	NewData = 0;
	Total = 0;
	Average = 0;
	Count = 0;

}

float WaterLevelMonitor::getCurrentlevel()
{
		return CurrentLevel;
}

float WaterLevelMonitor::getAveragelevel()
{
	AverageLevel = (Total / Count);
	return AverageLevel;
}

float WaterLevelMonitor::getHighestlevel()
{
	return HighestLevel;
}

float WaterLevelMonitor::getLowestlevel()
{
	return LowestLevel;
}

void WaterLevelMonitor::receiveData(float newLevel) 
{

	if (Count == 0) {

		HighestLevel = newLevel;
		LowestLevel = newLevel;
		CurrentLevel = newLevel;	
	}
	Count++;
	
	CurrentLevel = newLevel;
	Total += CurrentLevel; //total of all the monitored level (for the average function)

	if (newLevel > HighestLevel) { //if the new level input is higher than the highest value
		HighestLevel = newLevel;
	}
	else if (newLevel < LowestLevel) { //if the new level input is lower than the lowest value
		LowestLevel = newLevel;
	}

}
