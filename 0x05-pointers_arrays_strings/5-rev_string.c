#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char x = s[0];
	int counter = 0;
	int i;

	while (s[counter] != 0)
		counter--;
	x = s[1];
	s[1] = s[counter];
	s[counter] = x;
}
