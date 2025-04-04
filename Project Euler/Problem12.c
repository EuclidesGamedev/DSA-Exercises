#include<stdio.h> // Utils

unsigned int divisors(unsigned int *number) {
	unsigned int counter = 0;

	for (unsigned int i = 1; i <= *number; i++) {
		if (*number % i == 0) counter++;
	}

	return counter;
}

// What is the value of the first triangle number to have over five hundred divisors?
// In my computer the processing time is around 13 minutes.

int main(int argc, char* argv[]) {
	unsigned int result = 0;
	unsigned int index = 1;
	unsigned int d = 0;
	while (1) {
		result += index;
		d = divisors(&result);

		if (d > 500) {
			break;
		}
		
		index++;
	}
	
	printf("The result of problem 12 is %d\n", result);
	return 0;
}

