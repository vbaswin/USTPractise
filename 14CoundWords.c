/*
	Take an array of input B=[‘Daa’, ‘aaB’ , ‘AcB’] give the count of  words starting with either ‘a’ or ‘A’
*/

#include <stdio.h>
#include <string.h>

int main() {
	// Input array of strings
	char *B[] = {"Daa", "aaB", "AcB"};
	int n = sizeof(B) / sizeof(B[0]);	 // Number of elements in the array
	int count = 0;

	// Iterate over the array
	for (int i = 0; i < n; i++) {
		// Check if the first character of the string is 'a' or 'A'
		if (B[i][0] == 'a' || B[i][0] == 'A') {
			count++;
		}
	}

	printf("The count is %d\n", count);	   // Print the count

	return 0;
}
