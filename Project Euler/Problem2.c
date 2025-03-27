#include<stdio.h>

// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

int main(int argc, char* argv[]) {
	unsigned int result = 0;
	
	// Variables to use to get fibonacci sequence
	unsigned int previous = 1;
	unsigned int current = 1;
	unsigned int temp;
	
	// Walk through fibonacci sequence until the terms exceed 4 million
	while (current <= 4000000) {
		temp = previous + current;
		previous = current;
		current = temp;
		
		// If term is even, sum it in result
		if (current % 2 == 0) {
			result += current;
		}
	}
	
	// Get the result
	printf("The result from problem 2 is %d\n", result);
	return 0;
}

