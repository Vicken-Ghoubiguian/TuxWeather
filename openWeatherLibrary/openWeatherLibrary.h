#ifndef OPENWEATHERLIBRARY
#define OPENWEATHERLIBRARY

// Definition of the structure 'openWeather' which is the type 'OpenWeather'...
typedef struct openWeather OpenWeather;

// Definition of the 'simpleGetWeather' function, which takes the wished city and the OpenWeatherMap api key in argument...
void simpleGetWeather(char* city, char* apiKey);

// Definition of the 'completeGetWeather' function, which takes the wished city, the corresponding country code and the OpenWeatherMap api key in argument...
void completeGetWeather(char* city, char* countryCode, char* apiKey);

// Definition of the 'printWeather' function, which display the weather in parameters...
void printWeather(OpenWeather weather);

#endif
