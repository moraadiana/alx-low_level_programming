#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	char x = 0;

	while x < 10
	{
		_putchar(x);
		_putchar('\n');
		x++;
	}
}
