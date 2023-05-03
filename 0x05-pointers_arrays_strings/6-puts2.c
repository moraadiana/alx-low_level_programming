#include "main.h"
/**
 * puts2 - function that prints every other character
 * of a string, starting with the first character, 
 * followed by a new line.
 * @str: string
 * Return: string
 */
void puts2(char *str)
{
	int x = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != 0)
	{
		y++;
		x++;
	}
	t = x - 1;
	for(o = 0 ; o <= t ; o++)
	{
		if ( 0 % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');

}
