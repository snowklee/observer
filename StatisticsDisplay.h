#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
#include <iostream>
using namespace std;

class StatisticsDisplay : public Observer, public DisplayElement{
	private:
		float maxTemp;
		float minTemp;
		float tempSum;
		int numReadings;
		Subject *weatherData;
	public:
    	StatisticsDisplay(Subject *weatherData);
    	virtual void update(float t, float h, float p);
    	virtual void display();
};

#endif

