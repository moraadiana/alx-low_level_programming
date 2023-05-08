#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @n: bytes to be copied
 * @src: source where is copied
 * @dest: destination where is stored
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (des);
}
