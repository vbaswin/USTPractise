/*
	Find the pyramid sum of an array . i. e. , if the array is  [1,2, 3], find[1+2,2+3]=[3,5].
	Further, [3+5]=[8]. Pyramid sum of array is  8.
*/

#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3};					 // Input array
	int n = sizeof(arr) / sizeof(arr[0]);	 // Calculate the size of the array

	// Continue until the array size becomes 1
	while (n > 1) {
		// Calculate the sum of adjacent elements and store it in the first element
		for (int i = 0; i < n - 1; i++) {
			arr[i] = arr[i] + arr[i + 1];
		}
		n--;	// Reduce the array size by 1
	}

	// Print the pyramid sum
	printf("The pyramid sum of the array is: %d\n", arr[0]);

	return 0;
}
