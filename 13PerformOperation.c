/*
	Given A=X+Y and B=X-Y , A and B values are entered by the user then return Z=X*Y
*/

#include <stdio.h>

int main() {
	// Variables to store the values of A, B, X, Y, and Z
	float A, B, X, Y, Z;

	// Get the values of A and B from the user
	printf("Enter the value of A: ");
	scanf("%f", &A);
	printf("Enter the value of B: ");
	scanf("%f", &B);

	// Calculate the values of X and Y
	X = (A + B) / 2;
	Y = (A - B) / 2;

	// Calculate the value of Z
	Z = X * Y;

	// Print the value of Z
	printf("The value of Z is: %.2f\n", Z);

	return 0;
}
