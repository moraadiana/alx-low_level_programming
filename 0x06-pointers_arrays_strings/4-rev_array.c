#include "main.h"
/**
 * reverse_array - a function that reverses the
 * content of an array of integers
 * @a: array to reverse
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, tmp;

	for (x = n - 1; x >= n / 2; x--)
	{
		tmp = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = tmp;
	}

}
