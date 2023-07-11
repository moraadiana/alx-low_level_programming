#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function to return pointer to string
 * @str: pointer to string array input
 * Return: pointer to string created
 */

char *_strdup(char *str)
{
	char *s;
	int x = 0, y = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[y])
	{
		y++;
	}
	s = malloc((sizeof(char) * y) + 1);

	if (s == NULL)
		return (NULL);
	while (x < 1)
	{
		s[x] = str[x];
		x++;
	}
	s[x] = '\0';
	return (s);
}
