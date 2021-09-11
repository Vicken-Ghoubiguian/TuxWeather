#ifndef OPENWEATHERLIBRARY
#define OPENWEATHERLIBRARY

// Definition of the structure 'openWeather' which is the type 'OpenWeather'...
typedef struct openWeather OpenWeather;

// Definition of the 'simpleGetWeather' function, which takes the wished city and the OpenWeatherMap api key in argument...
OpenWeather* simpleGetWeather(char* city, char* apiKey);

// Definition of the 'completeGetWeather' function, which takes the wished city, the corresponding country code and the OpenWeatherMap api key in argument...
OpenWeather* completeGetWeather(char* city, char* countryCode, char* apiKey);

// Definition of the 'printWeather' function, which display the weather in parameters...
void printWeather(OpenWeather* weather);

// Definition of the 'getLongitude' function, which returns the longitude from the weather in parameters...
float getLongitude(OpenWeather* weather);

// Definition of the 'getLatitude' function, which returns the latitude from the weather in parameters...
float getLatitude(OpenWeather* weather);

// Definition of the 'getTemperature' function, which returns the current temperature from the weather in parameters...
float getTemperature(OpenWeather* weather);

// Definition of the 'getFeelingLikeTemperature' function, which returns the current feeling like temperature from the weather in parameters...
float getFeelingLikeTemperature(OpenWeather* weather);

// Definition of the 'getMinimalTemperature' function, which returns the waited minimal temperature from the weather in parameters...
float getMinimalTemperature(OpenWeather* weather);

// Definition of the 'getMaximalTemperature' function, which returns the waited maximal temperature from the weather in parameters...
float getMaximalTemperature(OpenWeather* weather);

#endif
