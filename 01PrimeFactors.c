/*
	sum of prime factors of given number
*/
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
	if (num <= 1) return 0;	   // Numbers less than or equal to 1 are not prime
	if (num == 2) return 1;

	// check if any numumber from 2 to n-1 is divisible by
	// if numot then return 0
	for (int i = 2; i < num; ++i) {
		if (num % i == 0)
			return 0;
	}

	return 1;	 // If no divisors are found, the number is prime
}

int main() {
	int num = 315;	  // Input number
	int sum = 0;

	// Iterate over the numbers up to num
	for (int i = 2; i <= num; i++) {
		// Check if i is a prime factor of num
		while (isPrime(i) && num % i == 0) {
			sum += i;
			num /= i;
		}
	}

	printf("The sum of prime factors is %d\n", sum);	// Print the sum

	return 0;
}
