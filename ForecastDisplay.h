#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
#include <iostream>
using namespace std;

class ForecastDisplay: public Observer, public DisplayElement{
	private:
		float currentPressure;
    	float lastPressure;
    	Subject *weatherData;
	public:
    	ForecastDisplay(Subject *weatherData);
    	virtual void update(float t, float h, float p);
    	virtual void display();
};
#endif

