#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print all the letters except q and e
 * Return: 0 is success
 */
int main(void)
{
	char e,q, small;
	q = 'q';
        e = 'e';

	for (small = 'a';small <= 'z'; small++)
	{
	if (small !=e && small !=q)
	putchar(small);
	}
	putchar('\n');
	return (0);
}
