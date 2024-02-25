/*
	Given a string S. A phone number is hiding in it. S can contain alphabet numerical and characters.
	Write the fuction which extracts the phone number only as a string.
	The last 10 numeric digits are the phone number. <=======
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Function to extract the last 10 numeric digits from a string
void extractPhoneNumber(char *str) {
	int len = strlen(str);
	char phone[11];
	int j = 0;

	// Iterate over the string from the end
	for (int i = len - 1; i >= 0 && j < 10; i--) {
		// If the character is a digit
		if (isdigit(str[i])) {
			// Add it to the phone number
			phone[j] = str[i];
			j++;
		}
	}

	// If less than 10 digits were found
	if (j < 10) {
		printf("The string does not contain a phone number.\n");
	} else {
		// Reverse the phone number and print it
		printf("The phone number is: ");
		for (int i = 9; i >= 0; i--) {
			printf("%c", phone[i]);
		}
		printf("\n");
	}
}

int main() {
	char str[] = "Hello, my number is 1234567890";	  // Input string

	extractPhoneNumber(str);	// Extract and print the phone number

	return 0;
}
