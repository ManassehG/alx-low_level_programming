#include "main.h"
/**
 * print_most_numbers - a function that prints numbers
 *
 */
void print_most_numbers(void)
{
	int a, b;

	b = 0;

	while (b <= 9)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar(a % 10 + '0')
		}
		b++;
	}
	_putchar('\n')
}
