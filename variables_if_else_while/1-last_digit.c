#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = abs(n % 10);

	printf("Last digit of %d is %d and ", n, last_digit);

	if (last_digit > 5)
		printf("is greater than 5\n");
	else if (last_digit == 0)
		printf("is 0\n");
	else
		printf("is less than 6 and not 0\n");
	return (0);
}
