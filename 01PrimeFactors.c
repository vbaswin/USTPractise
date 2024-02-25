/*
	This program first checks if a number is prime with the prime function.
	Then, in the sum_of_prime_factors function, it checks for all numbers from 2 to
	the given number if they are prime and a factor of the given number. If they are,
	it adds them to the sum and divides the given number by the prime factor until it is
	no longer divisible. Finally, it prints the sum of the prime factors.
*/



#include <stdio.h>

int prime(int n) {
	if (n <= 1) return 0;
	if (n <= 3) return 1;

	if (n % 2 == 0 || n % 3 == 0) return 0;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return 0;

	return 1;
}

int sum_of_prime_factors(int n) {
	int sum = 0;
	for (int i = 2; i <= n; i++) {
		while (prime(i) && n % i == 0) {
			sum += i;
			n = n / i;
		}
	}
	return sum;
}

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Sum of Prime Factors of %d is %d", num, sum_of_prime_factors(num));
	return 0;
}
