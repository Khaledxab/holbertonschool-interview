#include "slide_line.h"
/**
 * reverse - reverse the array
 * @line: pointer to the array
 * @size: size of the array
 * Return: Nothing.
 **/
void reverse(int *line, size_t size)
{
	size_t a, b;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		int temp = line[a];

		line[a] = line[b];
		line[b] = temp;
		a++;
		b--;
	}
}

/**
 * zero - moves zeros
 * @line: pointer to the array
 * @size: size of the array
 * Return: Nothing.
 **/
void zero(int *line, size_t size)
{
	size_t a, b;

	for (a = 0; a < size; a++)
	{
		if (line[a] == 0)
		{
			for (b = a + 1; b < size; b++)
			{
				if (line[b] != 0)
				{
					line[a] = line[b];
					line[b] = 0;
					break;
				}
			}
		}
	}
}

/**
 * Nzeor - moves non zeros
 * @line: pointer to the array
 * @size: size of the array
 * Return: Nothing.
 **/
void Nzeor(int *line, size_t size)
{
	size_t i;

	i = 0;
	while (i < size - 1)
	{
		if (line[i] == line[i + 1])
		{
			line[i] = line[i] * 2;
			line[i + 1] = 0;
			i++;
		}
		i++;
	}
}
/**
 * slide_line - function that slides and merges an array of integers.
 * @line: points to an array of integers containing
 * @size: elements, that must be slided & merged to the
 * @direction: represented by direction
 * Return: 1 upon success, or 0 upon failure.
 */
int slide_line(int *line, size_t size, int direction)
{
	if (direction == SLIDE_LEFT)
	{
		zero(line, size);
		Nzeor(line, size);
		zero(line, size);
	}
	else if (direction == SLIDE_RIGHT)
	{
		reverse(line, size);
		zero(line, size);
		Nzeor(line, size);
		zero(line, size);
		reverse(line, size);
	}
	else
		return (0);
	return (1);
}
