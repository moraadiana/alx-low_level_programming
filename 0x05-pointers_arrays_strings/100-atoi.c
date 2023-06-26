#include "main.h"

/**
 * int _atoi(char *s) - convert a string to an integer.
 * Return: Always 0.
 */

int _atoi(char *s)
{
    int sign = 1; // Sign of the number, default is positive
    int result = 0; // Accumulator for the converted number

    // Skip leading white spaces
    while (*s == ' ')
        s++;

    // Check for sign
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
    {
        s++;
    }

    // Convert each digit
    while (*s != '\0' && (*s >= '0' && *s <= '9'))
    {
        int digit = *s - '0';
        result = result * 10 + digit;
        s++;
    }

    return sign * result;
}

