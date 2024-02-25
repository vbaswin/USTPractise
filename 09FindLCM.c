/*
	Given array S, find LCM of pair of numbers in the same order and display the largest LCM value
*/

#include <stdio.h>

// Function to calculate the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

// Function to calculate the Least Common Multiple (LCM)
int lcm(int a, int b) {
	return (a / gcd(a, b)) * b;
}

int main() {
	int arr[] = {2, 7, 3, 8, 4, 9};			 // Input array
	int n = sizeof(arr) / sizeof(arr[0]);	 // Calculate the size of the array
	int max_lcm = 0;						 // Initialize maximum LCM

	// Iterate over the array in pairs
	for (int i = 0; i < n - 1; i++) {
		// Calculate the LCM of the pair
		int current_lcm = lcm(arr[i], arr[i + 1]);
		// Update the maximum LCM if necessary
		if (current_lcm > max_lcm) {
			max_lcm = current_lcm;
		}
	}

	// Print the maximum LCM
	printf("The largest LCM value is: %d\n", max_lcm);

	return 0;
}
