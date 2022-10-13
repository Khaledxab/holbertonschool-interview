#include "slide_line.h"

/**
 * slide_line - slides and merges an array of integers
 * @line: points to an array of integers
 * @size: number of elements in array
 * @direction: SLIDE_LEFT or SLIDE_RIGHT
 * Return: 1 upon success, or 0 upon failure
 */
int slide_line(int *line, size_t size, int direction)
{
	int i, j, k, l, m, n;

	if (direction == SLIDE_LEFT)
	{
		for (i = 0; i < (int)size - 1; i++)
		{
			if (line[i] == line[i + 1] && line[i] != 0)
			{
				line[i] *= 2;
				line[i + 1] = 0;
				for (j = i + 1; j < (int)size - 1; j++)
					line[j] = line[j + 1];
				line[j] = 0;
				i--;
			}
		}
	}
	else if (direction == SLIDE_RIGHT)
	{
		for (k = (int)size - 1; k > 0; k--)
		{
			if (line[k] == line[k - 1] && line[k] != 0)
			{
				line[k] *= 2;
				line[k - 1] = 0;
				for (l = k - 1; l > 0; l--)
					line[l] = line[l - 1];
				line[l] = 0;
				k++;
			}
		}
	}
	else
		return (0);
	for (m = 0; m < (int)size; m++)
	{
		if (line[m] == 0)
		{
			for (n = m; n < (int)size - 1; n++)
				line[n] = line[n + 1];
			line[n] = 0;
			m--;
		}
	}
	return (1);
}
