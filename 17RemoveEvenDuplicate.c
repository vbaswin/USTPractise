/*
	Given an array(integers). Remove an element from the array if it is an even number or a duplicate number.
	Return the count of elements in the array after removing the same.
*/

#include <stdio.h>

// Function to check if a number is in an array
int isInArray(int arr[], int n, int num) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == num) {
			return 1;
		}
	}
	return 0;
}

int main() {
	// Input array
	int arr[] = {1, 2, 2, 3, 4, 5, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);	 // Number of elements in the array
	int newArr[n];							 // Array to store the new elements
	int count = 0;							 // Count of the new elements

	// Iterate over the array
	for (int i = 0; i < n; i++) {
		// Check if the number is not even and not a duplicate
		if (arr[i] % 2 != 0 && !isInArray(newArr, count, arr[i])) {
			newArr[count] = arr[i];
			count++;
		}
	}

	printf("The count is %d\n", count);	   // Print the count

	return 0;
}
