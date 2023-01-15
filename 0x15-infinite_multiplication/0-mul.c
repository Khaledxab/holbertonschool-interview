#include "holberton.h"




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

int pow_10(int exp) {
    int result = 1;
    while (exp-- > 0) {
        result *= 10;
    }
    return result;
}

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
