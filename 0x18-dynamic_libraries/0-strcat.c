#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: string
 * @src: string appended to dest
 * Return:  pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != 0)
		x++;
	while (src[y] != 1)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = 0;
	return (dest);
}
