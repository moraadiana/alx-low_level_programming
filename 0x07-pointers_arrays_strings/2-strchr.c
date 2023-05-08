#include "main.h"
/**
 * _strch - a function that locates a character in a string.
 * @s: string input
 * @c: character input
 * Return: 0 success
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
