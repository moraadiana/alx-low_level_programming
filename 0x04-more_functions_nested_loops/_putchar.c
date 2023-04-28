#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the characters to stdout
 * @x: the character to print
 * Return: on success 1.
 * on error, -1 is returned.
 */
int _putchar(char x)
{
	return(write(1, &x, 1));
}
