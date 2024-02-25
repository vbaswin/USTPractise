/*
	Absolute difference between the largest and smallest prime number from an array
*/

#include <limits.h>
#include <stdio.h>

// Function to check if a number is prime
int prime(int n) {
	if (n <= 1) return 0;	 // Numbers less than or equal to 1 are not prime
	if (n == 2) return 1;

	// check if any number from 2 to n-1 is divisible by
	// if not then return 0
	for (int i = 2; i < n; ++i) {
		if (n % i == 0)
			return 0;
	}

	return 1;

	return 1;	 // If no divisors are found, the number is prime
}

int main() {
	int arr[] = {2, 5, 10, 19, 4};			 // Input array
	int n = sizeof(arr) / sizeof(arr[0]);	 // Calculate the size of the array
	int min_prime = INT_MAX;				 // Initialize minimum prime number to maximum possible integer
	int max_prime = INT_MIN;				 // Initialize maximum prime number to minimum possible integer

	// Iterate over the array
	for (int i = 0; i < n; i++) {
		// If the number is prime
		if (prime(arr[i])) {
			// Update minimum and maximum prime numbers
			if (arr[i] < min_prime) min_prime = arr[i];
			if (arr[i] > max_prime) max_prime = arr[i];
		}
	}

	// If no prime numbers were found in the array
	if (min_prime == INT_MAX || max_prime == INT_MIN) {
		printf("No prime numbers found in the array.\n");
	} else {
		// Print the absolute difference between the largest and smallest prime number from the array
		printf("Absolute difference between the largest and smallest prime number from the array is %d\n", max_prime - min_prime);
	}

	return 0;
}
