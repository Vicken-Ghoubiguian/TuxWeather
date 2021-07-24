#ifndef OPENWEATHERLIBRARY
#define OPENWEATHERLIBRARY

// Definition of the structure 'openWeather' which is the type 'OpenWeather'...
typedef struct openWeather OpenWeather;

// Definition of the 'getWeather' function, which takes the wished city and the OpenWeatherMap api key in argument...
void getWeather(char* city, char* apiKey);

// Definition of the 'getWeather' function, which takes the wished city, the corresponding country code and the OpenWeatherMap api key in argument...
void getWeather(char* city, char* countryCode, char* apiKey);

#endif
