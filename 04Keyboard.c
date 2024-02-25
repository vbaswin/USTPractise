/*
	In a keyboard manufacturing company if N=4 and X=2 then the keyboard nos will be 2,3,4,5.
	Find if keyboard is sold by checking N value and nos
*/


#include <stdio.h>

int main() {
	int N = 4;	  // The total number of keyboards
	int X = 2;	  // The starting number of the keyboards
	int keyboard_no;

	// Get the keyboard number from the user
	printf("Enter the keyboard number: ");
	scanf("%d", &keyboard_no);

	// Check if the keyboard number is within the range of sold keyboards
	if (keyboard_no >= X && keyboard_no < X + N) {
		printf("The keyboard with number %d is sold.\n", keyboard_no);
	} else {
		printf("The keyboard with number %d is not sold.\n", keyboard_no);
	}

	return 0;
}
