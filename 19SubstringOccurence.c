/*
	c code for finding the position of fist occurrence of a  substring from a sentence
*/

#include <stdio.h>
#include <string.h>

int main() {
	// The main string
	char str[100] = "Hello, this is a sample sentence.";

	// The substring to find
	char substr[10] = "sample";

	// Use strstr to find the substring in the string
	char *pos = strstr(str, substr);

	if (pos) {
		// If the substring is found, print its position
		// Note: In C, strings are 0-indexed
		printf("The substring is found at position: %ld\n", pos - str);
	} else {
		// If the substring is not found, print a message
		printf("The substring is not found in the string.\n");
	}

	return 0;
}
