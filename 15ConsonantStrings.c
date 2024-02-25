/*
	Return the count of strings containing only consonants from an array of strings
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Function to check if a character is a vowel
int isVowel(char c) {
	c = tolower(c);	   // Convert to lowercase
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
	// Input array of strings
	char *arr[] = {"bcdf", "aei", "rst", "ou"};
	int n = sizeof(arr) / sizeof(arr[0]);	 // Number of elements in the array
	int count = 0;

	// Iterate over the array
	for (int i = 0; i < n; i++) {
		int j, len = strlen(arr[i]);
		// Check each character of the string
		for (j = 0; j < len; j++) {
			if (isVowel(arr[i][j])) {
				break;
			}
		}
		// If no vowel is found, increment the count
		if (j == len) {
			count++;
		}
	}

	printf("The count is %d\n", count);	   // Print the count

	return 0;
}
