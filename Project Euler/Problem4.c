#include<math.h>
#include<stdio.h>

//Utils

int getPlaces(unsigned int number) {
	int places = 0;
	while (number > pow(10, places)) {
		places += 1;
	}
	return places;
}

int isPalindrome(unsigned int number) {
	const int places = getPlaces(number);
	int digits[places];

	for (int i = places; i > 0; i--) {
		digits[places - i] = number / pow(10, i - 1);
		number = number % (int)pow(10, i - 1);
	}
	
	for (int i = 0; i < places; i++) {
		if (digits[i] != digits[places - i - 1]) {
			return 0;
		}
	}
		
	return 1;
}

// Find the largest palindrome made from the product of two 3-digits numbers.

int main(int argc, char* argv[]) {
	unsigned int result = 0;
	
	// Check all products of two 3-digits numbers.
	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			// Check the product satisfies the conditions
			if (isPalindrome(i * j) && (i *j) > result) {
				result = i * j;
			}
		}
	}
	
	// Get the result
	printf("The result of problem 4 is %d\n", result);
	return result;
}

