#include "main.h"

/**
 * int _atoi(char *s) - convert a string to an integer.
 * Return: Always 0.
 */

int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    while (*s == ' ')
        s++;
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
    {
        s++;
    }

    while (*s != '\0' && (*s >= '0' && *s <= '9'))
    {
        int digit = *s - '0';
        result = result * 10 + digit;
        s++;
    }

    return sign * result;
}

