#include "main.h"
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int c = 0;
	int x;

	while (*s != '0')
	{
		c++;
		s++;
	}
	s--;
	for (x = c; x > 0; x--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
