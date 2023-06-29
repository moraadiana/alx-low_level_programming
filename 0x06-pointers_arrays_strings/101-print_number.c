#include "main.h"

/**
 * print_number(int n) - prints an integer.
 *
 */
void print_number(int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }
    else if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    int divisor = 1;
    int num = n;

    while (num / divisor > 9)
        divisor *= 10;

    while (divisor != 0)
    {
        _putchar((num / divisor) + '0');
        num %= divisor;
        divisor /= 10;
    }
}

