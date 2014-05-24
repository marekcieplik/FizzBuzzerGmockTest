#include "FizzBuzzer.h"
#include <stdlib.h>

FizzBuzzer::FizzBuzzer(int a_start, int a_end): start(a_start), end(a_end), current(a_start) {
}

bool FizzBuzzer::hasNextString() {
	return current <= end;
}

std::string FizzBuzzer::getNextString() {
	std::string s;
	char buffer[100];
	
	if      (!hasNextString()) s = "";
	else if ((0 == (current % 3)) && (0 == (current % 5))) s = "FizzBuzz";
	else if (0 == (current % 3)) s = "Fizz";
	else if (0 == (current % 5)) s = "Buzz";
	else { // s = std::to_string(current); // w C++11
		itoa(current, buffer, 10);
		s = std::string(buffer);
	}
	
	current++;
	return s;
}

void FizzBuzzer::reset() {
	// TODO implement me
	current = start;
}

