/*
	Given a string. It contains 4 letter and 5 letter palindromes. If the palindrome is 4 letter add 5 to output and if palindrome is 5 letter add 10 to output. Get the total output. If no palindromes in string get 0 as output.
	Eg: asdfg htth jklm rrtrr qwerty
	Output is 5+10= 15
*/

#include <stdio.h>
#include <string.h>

// Function to check if a word is palindrome
int isPalindrome(char *word, int len) {
	for (int i = 0; i < len / 2; i++) {
		if (word[i] != word[len - i - 1]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	char str[] = "asdfg htth jklm rrtrr qwerty";	// Input string
	char *word;
	int output = 0;

	// Tokenize the string into words
	word = strtok(str, " ");
	while (word != NULL) {
		int len = strlen(word);

		// Check for 4-letter and 5-letter palindromes
		if ((len == 4 || len == 5) && isPalindrome(word, len)) {
			output += (len == 4) ? 5 : 10;
		}

		word = strtok(NULL, " ");
	}

	printf("Output is %d\n", output);	 // Print the output

	return 0;
}
