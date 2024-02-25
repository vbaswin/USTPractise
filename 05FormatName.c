/*
	Convert names into the format such that first letter is capital and the rest all are in lowercase
	Eg:Mark,Alice
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
	char name[50];

	// Get the name from the user
	printf("Enter the name: ");
	scanf("%s", name);

	// Convert the first character to uppercase
	name[0] = toupper(name[0]);

	// Convert the rest of the characters to lowercase
	for (int i = 1; i < strlen(name); i++) {
		name[i] = tolower(name[i]);
	}

	// Print the formatted name
	printf("Formatted name: %s\n", name);

	return 0;
}
