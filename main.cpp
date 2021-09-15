#include "WeatherData.h"
#include "CurrentCondidtionDisplay.h"
#include "ForecastDisplay.h"
#include "StatisticsDisplay.h"

int main()
{
    WeatherData* weatherData = new WeatherData();
    CurrentCondidtionDisplay* currentDisplay = new CurrentCondidtionDisplay(weatherData);
    ForecastDisplay* forecastDisplay = new ForecastDisplay(weatherData);
    StatisticsDisplay* statisticsDisplay = new StatisticsDisplay(weatherData);

    weatherData->setMeasurements(15, 60, 772);

    return 0;
}

