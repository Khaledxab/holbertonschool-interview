#include "palindrome.h"

/**
 * is_palindrome - checks whether or not a given unsigned integer is a palindrome.
 * @n: number to check
 * Return: 1 if n is a palindrome, and 0 otherwise
 */

int is_palindrome(unsigned long n)
{
    unsigned long rev = 0, tmp = n;
    while (tmp != 0)
    {
        rev = rev * 10;
        rev = rev + tmp % 10;
        tmp = tmp / 10;
    }
    if (rev == n)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
