#include "main.h"
/**
 * print_line - function to draw straight line
 *
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int co;

	if (n > 0)
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
