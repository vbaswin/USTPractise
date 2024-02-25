/*
	product of number from given sum and difference
*/

#include <stdio.h>

int main() {
	int sum, diff;

	// Get the sum and difference from the user
	printf("Enter the sum of the two numbers: ");
	scanf("%d", &sum);
	printf("Enter the difference of the two numbers: ");
	scanf("%d", &diff);

	// Calculate the two numbers
	int num1 = (sum + diff) / 2;
	int num2 = (sum - diff) / 2;

	// Calculate and print the product
	int product = num1 * num2;
	printf("The product of the two numbers is: %d\n", product);

	return 0;
}
