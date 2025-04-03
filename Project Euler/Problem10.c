#include<stdio.h>
#include<math.h>

// Utils
int isPrime(unsigned long int number) {
	// Special cases
	if (number == 0) return 0;
	if (number == 1) return 0;
	if (number == 2) return 1;
	
	// Factorization
	for (unsigned long int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			return 0;
		}
	}

	return 1;
}

// Find the sum of all the primes below two million.

int main(int argc, char* argv[]) {
	unsigned long int result = 0;

	for (unsigned long int i = 0; i < 2000000; i++) {
		result = isPrime(i) ? result + i : result;
	}

	printf("The result of problem 10 is %ld\n", result);
	return 0;
}

