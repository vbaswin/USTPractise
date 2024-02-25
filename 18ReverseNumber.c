/*
	Display the reverse of a number .Take an input: '400'. Display the reverse of it as '4' and not '004'.
*/

#include <stdio.h>

int main() {
	int num = 400;	  // Input number
	int rev = 0;

	// Reverse the number
	while (num != 0) {
		rev = rev * 10 + num % 10;
		num /= 10;
	}

	printf("The reverse is %d\n", rev);	   // Print the reverse

	return 0;
}
