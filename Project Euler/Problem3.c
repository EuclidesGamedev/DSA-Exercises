#include<math.h>
#include<stdio.h>

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

// What is the largest prime factor of the number 600851475143?

int main(int argc, char* argv[]) {
	unsigned long int number = 600851475143;
	unsigned int result = 0;
	
	// Start from ceil of square root number,
	// checks if it's prime and divides number
	// and is prime. If not, shrinks the number
	// until the condition be satisfied.
	for (int i = ceil(sqrt(number)); i > 1; i--) {
		if (number % i == 0 && isPrime(i)) {
			result = i;
			break;
		}
	}

	// Get the result
	printf("The solution of problem 3 is %d\n", result);
	return 0;
}

