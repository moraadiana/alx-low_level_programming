#include "main.h"

/**
 * print_last_digit(int x) -  prints the last digit of a number
 * Return: value of the last digit
 */

int print_last_digit(int x)
{
    int last_digit;

    if (x < 0)
        x = -x;

    last_digit = x % 10;

    _putchar(last_digit + '0');

    return last_digit;
}

