#include "main.h"
#include "_putchar.c"
/**
 * print_numbers - prit numbers from 0-9
 * Return: void
 */

void  print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar ('\n');
}
