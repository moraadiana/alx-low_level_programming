#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, y;

	x = 0;

	while (src[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < len; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';

	return (dest);
}
