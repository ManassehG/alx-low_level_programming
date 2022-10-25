#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a: input number
 * @b: input number
 * Return: swapped numbers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

