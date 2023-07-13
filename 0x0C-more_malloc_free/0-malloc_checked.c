#include "main.h"

/**
 * malloc_checked - allocates memory using malloc,
 * @b: size of the memory block to be allocated
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	void *b;

	b = malloc(b);
	if (b == NULL)
		exit(98);
	return (b);
}
