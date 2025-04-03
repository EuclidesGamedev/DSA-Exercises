#include<stdio.h>
#include<math.h>

// Utils
int isPrime(int number) {
	// Special cases
	if (number == 0) return 0;
	if (number == 1) return 0;
	if (number == 2) return 1;
	
	// Factorization
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			return 0;
		}
	}

	return 1;
}

// What is the 10001st prime number?

int main(int argc, char* argv[]) {
	int result, counter = 0;

	for (unsigned int i = 1; counter < 10001; i++) {
		if (isPrime(i)) {
			result = i;
			counter++;
		}
	}
	
	printf("The result of problem 7 is %d\n", result);
	return 0;
}

