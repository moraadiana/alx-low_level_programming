#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		_puchar(x);
	}
	 _putchar('\n');
}
