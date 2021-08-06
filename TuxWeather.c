// Include internal libraries...
#include "openWeatherLibrary/openWeatherLibrary.h"

//
#include <stdio.h>

// Definition of the main function...
int main(int argc, char *argv[]) {

	// In the case where the 'argc' variable (which contains the arguments count) is equal to 3 OR equal to 4... 
	if(argc == 3 || argc == 4) {
	
		// Declaration of 'test' which is of type OpenWeather*...
		OpenWeather* test;

		// In the case where the 'argc' variable (which contains the arguments count) is equal to 3...
		if(argc == 3) {
		
			// Call the first 'simpleGetWeather' function...
			test = simpleGetWeather(argv[1], argv[2]);
		
		// In the other case: the one where the 'argc' variable (which contains the arguments count) is equal to 4...
		} else {
		
			// Call the first 'completeGetWeather' function...
			test = completeGetWeather(argv[1], argv[2], argv[3]);
		}

		// Call the 'printWeather' function to print weather geted previously...
		printWeather(test);
	
	// In the other case...
	} else {
		
		// In the sub-case where the 'argc' variable (which contains the arguments count) is smaller than 3...
		if(argc < 3) {
			
			// Display a message to tell that the 'argc' variable (which contains the arguments count) must be imperatively 3 or 4... 
			printf("\e[0;31mARGS NUMBER ERROR: \e[0m\n");
		}
		
		// In the sub-case where the 'argc' variable (which contains the arguments count) is greater than 4...
		if(argc > 4) {

			// Display a message to tell that the 'argc' variable (which contains the arguments count) must be imperatively 3 or 4...
			printf("\e[0;31mARGS NUMBER ERROR: \e[0m\n");
		}
	}

	// Return 0 (execution without error)...
	return 0;
}
