/*
	Count the no of perfect squares in a given array
*/

#include <math.h>
#include <stdio.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int num) {
	int root = sqrt(num);
	return root * root == num;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};	// Input array
	int n = sizeof(arr) / sizeof(arr[0]);			// Calculate the size of the array
	int count = 0;									// Initialize count of perfect squares

	// Iterate over the array
	for (int i = 0; i < n; i++) {
		// If the number is a perfect square
		if (isPerfectSquare(arr[i])) {
			count++;	// Increment the count
		}
	}

	// Print the count of perfect squares
	printf("The number of perfect squares in the array is: %d\n", count);

	return 0;
}
