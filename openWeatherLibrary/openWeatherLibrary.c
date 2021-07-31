#include "openWeatherLibrary.h"

// Include standard libraries...
#include <stdio.h>

// Definition of the structure 'openWeather' which is the type 'OpenWeather'...
typedef struct openWeather {

    // Fields for geographic coordinates...
    float longitude;
    float latitude;

    // Fields for weather...
    int weather_id;
    char* weather_main;
    char* weather_description;
    char* weather_icon;

    // Fields for temperatures (in Kelvin - K)...
    float temperature;
    float feelingLikeTemperature;
    float minimalTemperature;
    float maximalTemperature;

    // Field for timezone (number of seconds of offset from UTC)...
    long int timezone;

    // Field for countryCode...
    char* countryCode;

    // Field for sunrise time (in timestamp)...
    long int sunrise;

    // Field for sunset time (in timestamp)...
    long int sunset;

    // Field for the id...
    long int id;

    // Field for the localisation's name...
    char* name;

    // Field for HTTP/HTTPS result code...
    int cod;

} OpenWeather;

// Definition of the 'simpleGetWeather' function, which takes the wished city and the OpenWeatherMap api key in argument...
OpenWeather* simpleGetWeather(char* city, char* apiKey){

    // Definition of the current 'OpenWeather' type variable (named 'test') which will be returned...
    OpenWeather* test;
    
    // Definition of all elements to make the HTTPS request to obtain all weather datas...
    int port = 80;

    printf("Hello, World!\n");

    return test;
}

// Definition of the 'completeGetWeather' function, which takes the wished city, the corresponding country code and the OpenWeatherMap api key in argument...
OpenWeather* completeGetWeather(char* city, char* countryCode, char* apiKey){

    // Definition of the current 'OpenWeather' type variable (named 'test') which will be returned...
    OpenWeather* test;
    
    // Definition of all elements to make the HTTPS request to obtain all weather datas...
    int port = 80;

    printf("Hello, World!\n");

    return test;
}

// Definition of the 'printWeather' function, which display the weather in parameters...
void printWeather(OpenWeather* weather){

    printf("Print weather!\n");
}
