/*
	Given an array of n elements. Consider  the consecutive pairs of the array as
	length and breadth of a rectangle. If the area < perimeter, then it is type A, else if area > perimeter,
	then it is type B.
	Find the absolute difference between the number of type A and type B rectangles.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5};			 // Input array
	int n = sizeof(arr) / sizeof(arr[0]);	 // Number of elements in the array
	int typeA = 0, typeB = 0;

	// Iterate over consecutive pairs in the array
	for (int i = 0; i < n - 1; i++) {
		int length = arr[i];
		int breadth = arr[i + 1];

		// Calculate area and perimeter
		int area = length * breadth;
		int perimeter = 2 * (length + breadth);

		// Check if it's type A or type B
		if (area < perimeter) {
			typeA++;
		} else if (area > perimeter) {
			typeB++;
		}
	}

	// Calculate the absolute difference between the number of type A and type B rectangles
	int diff = abs(typeA - typeB);

	printf("The absolute difference is %d\n", diff);	// Print the difference

	return 0;
}
