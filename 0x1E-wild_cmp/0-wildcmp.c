#include "holberton.h"

/**
 * wildcmp - Compare two strings, including wildcards
 * @s1: The first string
 * @s2: The second string
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	else if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
				return 1;
			s1++;
		}
		return wildcmp(s1, s2 + 1);
	}
	else
	{
		return (*s1 == *s2) && wildcmp(s1 + 1, s2 + 1);
	}
}
