#pragma once

using namespace std;

class WaterLevelMonitor
{
private:

	float CurrentLevel;
	float AverageLevel;
	float HighestLevel;
	float LowestLevel;
	float NewData;
	float Total;
	float Average;
	int Count;

public:

	WaterLevelMonitor();
	WaterLevelMonitor(float current, float average, float highest, float lowest, float newdata);

	float getCurrentlevel();
	float getAveragelevel();
	float getHighestlevel();
	float getLowestlevel();

	void receiveData(float newLevel);

};
