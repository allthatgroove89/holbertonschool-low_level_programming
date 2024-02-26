#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 * @a: The first integer to be swapped.
 * @b: The second intenger to be swapped.
 * Return - Always 0
 */

void swap_int(int *a, int *b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}
