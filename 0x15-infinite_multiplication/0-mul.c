#include "holberton.h"

/**
 * main - driver program
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	unsigned long n1, n2;

	if (argc < 3)
	{
		prinT();
		exit(98);
	}

	n1 = (unsigned long)argv[1];
	n2 = (unsigned long)argv[2];

	if (!n1 || !n2)
	{
		prinT();
		exit(98);
	}

	return (0);
}

/**
 * prinT - Print the word Error
 *
 * Return: nothing.
 */
void prinT(void)
{
	char *err = "Error";

	while (*err)
	{
		_putchar(*err);
		err++;
	}
	_putchar('\n');
}
