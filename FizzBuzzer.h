#pragma once

#include <string>

class FizzBuzzer {
public:
	std::string getNextString();
	bool hasNextString();
	void reset();
	FizzBuzzer(int a_start = 1, int a_end = 100);
private:
	int start;
	int end;
	int current;
};
