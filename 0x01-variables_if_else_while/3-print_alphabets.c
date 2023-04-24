#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main  - program that prints the alphabet in lowercase and uppercase
 * Return: o is for sucess
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	putchar(x);

	for (x = 'A'; x <= 'Z'; x++)
	putchar(x);
	putchar('\n');
	return (0);
}

