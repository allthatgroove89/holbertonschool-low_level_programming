#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that sums two integers
 * @a: first integer to sum
 * @b: second integer to sum
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that substract two integers
 * @a: first integer to substract
 * @b: second integer to substract
 * Return: the result of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two integers
 * @a: first integer to multiply
 * @b: second integer to multiply
 * Return: the result of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two integers
 * @a: first integer to divide
 * @b: second integer to divide
 * Return: the result of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that modulo two integers
 * @a: first integer to module
 * @b: second integer to module
 * Return: the result of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
