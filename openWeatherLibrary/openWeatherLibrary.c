//
#include "openWeatherLibrary.h"

// Include standard libraries...
#include <stdio.h>
#include <string.h>

// Definition of the 'OPENWEATHERHTTPSREQUESTSIZE' global variable to define the openWeather HTTPS request maximal size...
# define OPENWEATHERHTTPSREQUESTSIZE 200

// Definition of the 'OPENWEATHERHTTPSREQUESTPORT' global variable to define the openWeather HTTPS request port...
# define OPENWEATHERHTTPSREQUESTPORT 80

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

    // Definition of the current 'OpenWeather' type variable (named 'returnedWeather') which will be returned...
    OpenWeather* returnedWeather;

    // Definition of the 'openWeatherHTTPSRequest' which will contain the weather retrieval URL from OpenWeather...
    char openWeatherHTTPSRequest[OPENWEATHERHTTPSREQUESTSIZE] = "";

    // Declaration of all parts for the weather retrieval URL from OpenWeather to configure the corresponding HTTPS request...
    char* openWeatherRequestFirstPart = "https://api.openweathermap.org/data/2.5/weather?q=";
    char* openWeatherRequestSecondPart = "&appid=";

    // Definition of the weather retrieval URL from OpenWeather...
    strcat(openWeatherHTTPSRequest, openWeatherRequestFirstPart);
    strcat(openWeatherHTTPSRequest, city);
    strcat(openWeatherHTTPSRequest, openWeatherRequestSecondPart);
    strcat(openWeatherHTTPSRequest, apiKey);
    
    // Definition of all elements to make the HTTPS request to obtain all weather datas...
    int port = OPENWEATHERHTTPSREQUESTPORT;

    printf("%s\n", openWeatherHTTPSRequest);

    return returnedWeather;
}

// Definition of the 'completeGetWeather' function, which takes the wished city, the corresponding country code and the OpenWeatherMap api key in argument...
OpenWeather* completeGetWeather(char* city, char* countryCode, char* apiKey){

    // Definition of the current 'OpenWeather' type variable (named 'returnedWeather') which will be returned...
    OpenWeather* returnedWeather;

    // Definition of the 'openWeatherHTTPSRequest' which will contain the weather retrieval URL from OpenWeather...
    char openWeatherHTTPSRequest[OPENWEATHERHTTPSREQUESTSIZE] = "";

    // Declaration of all parts for the weather retrieval URL from OpenWeather to configure the corresponding HTTPS request...
    char* openWeatherRequestFirstPart = "https://api.openweathermap.org/data/2.5/weather?q=";
    char* openWeatherRequestSecondPart = ",";
    char* openWeatherRequestThirdPart = "&appid=";

    // Definition of the weather retrieval URL from OpenWeather...
    strcat(openWeatherHTTPSRequest, openWeatherRequestFirstPart);
    strcat(openWeatherHTTPSRequest, city);
    strcat(openWeatherHTTPSRequest, openWeatherRequestSecondPart);
    strcat(openWeatherHTTPSRequest, countryCode);
    strcat(openWeatherHTTPSRequest, openWeatherRequestThirdPart);
    strcat(openWeatherHTTPSRequest, apiKey);
    
    // Definition of all elements to make the HTTPS request to obtain all weather datas...
    int port = OPENWEATHERHTTPSREQUESTPORT;

    printf("%s\n", openWeatherHTTPSRequest);

    return returnedWeather;
}

// Definition of the 'printWeather' function, which display the weather in parameters...
void printWeather(OpenWeather* weather){

    printf("Print weather!\n");
}
