#include<stdio.h>

// Utils
int isPythagorean(unsigned int a, unsigned int b, unsigned int c) {
	return (a * a) + (b * b) == (c * c);
}

// There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.

int main(int argc, char* argv[]) {
	int result = 0;

	for (int a = 1; a < 1000; a++) {
		for (int b = 1; b < 1000; b++) {
			for (int c = 1; c < 1000; c++) {
				if ((a + b + c) == 1000) {
					if (isPythagorean(a, b, c)) {
						result = a * b * c;
						a = 1000;
						b = 1000;
						c = 1000;
					}
				}
			}
		}
	}

	printf("The result of problem 9 is %d\n", result);
	return 0;
}

