#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte.
 * @n: number of bytes to be changed
 * @s: starting address of thr memory to be filled
 * @b: desired value
 * Return: changed array with the new value forn bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}


