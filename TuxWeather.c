// Include internal libraries...
#include "openWeatherLibrary/openWeatherLibrary.h"

// Definition of the main function...
int main(int argc, char *argv[]) {

	//
	if(argc < 3) {
	
		// Declaration of 'test' which is of type OpenWeather*...
		OpenWeather* test;

		// Call the first 'simpleGetWeather' function...
		test = simpleGetWeather(argv[1], argv[2]);

		// Call the 'printWeather' function to print weather geted previously...
		printWeather(test);
	
	//
	} else {
		
		
	}

	// Return 0 (execution without error)...
	return 0;
}
