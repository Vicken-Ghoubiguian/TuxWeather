// Include internal libraries...
#include "openWeatherLibrary/openWeatherLibrary.h"

// Definition of the main function...
int main(int argc, char *argv[]) {

	OpenWeather* test;

	// Call the first 'simpleGetWeather' function...
	test = simpleGetWeather("", "");

	// Call the 'printWeather' function to print weather geted previously...
	printWeather(test);

	// Return 0 (execution without error)...
	return 0;
}
