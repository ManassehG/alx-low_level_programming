#include "main.h"

/**
 * print_alphabet_x10 - a function that prints alphabet 10 times
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	int a, coef;

	coef = 0;

	while (coef < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		coef++;
		_putchar('\n');
	}
}
