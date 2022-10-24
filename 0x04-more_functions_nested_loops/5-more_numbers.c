#include "main.h"
/**
 * more_numbers - a function that prints numbers
 *
 */
void more_numbers(void)
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
			_putchar(a % 10 + '0');
		}
		b++;
	}
	_putchar('\n');
}
