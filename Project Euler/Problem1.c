#include<stdio.h>

// Find the sum of all the multiples of 3 or 5 below 1000.

int main(int argc, char* argv[]) {
	unsigned int result = 0;
	
	// Sum all multiples of 3 below 1000
	for (int i = 1; i < 334; i++) {
		result += 3 * i;
	}

	// Sum all multiples of 5 below 1000
	for (int i = 1; i < 200; i++) {
		result += 5 * i;
	}
	
	// Subtract all multiples of 15 below 1000 for
	// remove duplicated sums.
	for (int i = 1; i <= 66; i++) {
		result -= 15 * i;
	}
	
	// Get the result
	printf("The result of problem 1 is %d\n", result);
	return 0;
}
