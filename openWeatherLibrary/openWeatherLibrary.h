#ifndef OPENWEATHERLIBRARY
#define OPENWEATHERLIBRARY

// Definition of the structure 'openWeather' which is the type 'OpenWeather'...
typedef struct openWeather OpenWeather;

// Definition of the 'getWeather' function...
void getWeather(char* city, char* apiKey);

//
void getWeather(char* city, char* countryCode, char* apiKey);

#endif
