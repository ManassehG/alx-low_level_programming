#include "main.h"
#include <stdio.h>
/**
 * print_array - prints a given array
 * @a: input
 * @n: input
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		printf(", ");
	}
	printf("\n");
}
