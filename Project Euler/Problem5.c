#include<stdio.h>

// Utils

int divisibleUntil20(unsigned int number) {
	for (int i = 1; i <= 20; i++) {
		if (number % i != 0) return 0;
	}
	return 1;
}

// What is the smallest positive number that is evenly divisible by all numbers from 1 to 20?

int main(int argc, char* argv[]) {
	unsigned int result = 1;
	
	while (!divisibleUntil20(result)) {
		result++;
	}
	
	// Get the result
	printf("The result of the problem 5 is %d.\n", result);
}

