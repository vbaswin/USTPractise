/*
	Given an array. For the elements in an array <0 return the square of the negative numbers.
*/

#include <stdio.h>

int main() {
	// Input array
	int arr[] = {-1, 2, -3, 4, -5};
	int n = sizeof(arr) / sizeof(arr[0]);	 // Number of elements in the array

	printf("Squared negative numbers:\n");

	// Iterate over the array
	for (int i = 0; i < n; i++) {
		// Check if the number is negative
		if (arr[i] < 0) {
			// Square the number and print it
			printf("%d\n", arr[i] * arr[i]);
		}
	}

	return 0;
}
