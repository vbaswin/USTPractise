/*
	Given a palindrome string containing 4 letter and 5 letter.a function scoreString is defined.
	if the length of string is 4 add 4 to score value of string or if it is 5 add 5 to score value of
	string and if no palindrome get 0 as the output.
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

int scoreString(char *str) {
	char *word;
	int score = 0;

	// Tokenize the string into words
	word = strtok(str, " ");
	while (word != NULL) {
		int len = strlen(word);

		// Check for 4-letter and 5-letter palindromes
		if ((len == 4 || len == 5) && isPalindrome(word, len)) {
			score += len;
		}

		word = strtok(NULL, " ");
	}

	return score;
}

int main() {
	char str[] = "asdfg htth jklm rrtrr qwerty";	// Input string
	int score = scoreString(str);
	printf("Score is %d\n", score);	   // Print the score

	return 0;
}
