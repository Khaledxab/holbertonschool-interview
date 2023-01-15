#include "holberton.h"

/**
 * check_valid_input - verifies the input numbers
 * @num1: The first input number as a string
 * @num2: The second input number as a string
 * Return: void
 */
void check_valid_input(char *num1, char *num2)
{
	int i = 0;

	while (num1[i])
	{
		if (num1[i] < 48 || num1[i] > 57)
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			exit(98);
		}
		i++;
	}
	i = 0;

	while (num2[i])
	{
		if (num2[i] < 48 || num2[i] > 57)
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			exit(98);
		}
		i++;
	}
}

/**
 * pow_10 - calculates 10 to the power of a given exponent
 * @exp: The exponent of the power of 10
  * Return: result of 10 to the power of exp
 */
int pow_10(int exp)
{
	int result = 1;

	while (exp-- > 0)
	{
		result *= 10;
	}
	return result;
}

/**
 * mul - multiplies two input numbers and prints the result
 * @num1: The first input number as a string
 * @num2: The second input number as a string
 * Return: void
 */
void mul(char *num1, char *num2)
{
	check_valid_input(num1, num2);
	int result = atoi(num1) * atoi(num2);
	int temp = result;
	int count = 0;

	while (temp != 0)
	{
		count++;
		temp /= 10;
	}
	temp = result;
	while (count)
	{
		_putchar(temp / pow_10(count - 1) + '0');
		temp %= pow_10(count - 1);
		count--;
	}
	_putchar('\n');
}

/**
 * main - entry point for the program
 * @argc: number of command-line arguments passed
 * @argv: array of command-line arguments
 * Return: 0 on success, other values on failure
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	mul(argv[1], argv[2]);
	return (0);
}
