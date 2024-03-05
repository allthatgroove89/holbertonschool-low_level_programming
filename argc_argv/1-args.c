#include <stdio.h>
/**
 * main - entry point
 * description - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: is 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void)argv;

	return (0);
}
