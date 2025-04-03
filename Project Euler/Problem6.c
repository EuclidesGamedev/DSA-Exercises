#include<stdio.h>

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

int main(int argc, char* argv[]) {
	unsigned int result = 0;
	
	for (int i = 1; i <= 100; i++) {
		result += i;
	}
	result *= result;

	for (int i = 1; i <= 100; i++) {
		result -= i * i;
	}

	printf("The result of problem 6 is %d\n", result);
	return 0;
}

