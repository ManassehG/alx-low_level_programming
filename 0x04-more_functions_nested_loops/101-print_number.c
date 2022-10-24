#include "main.h"

/**
 * print_number - prints a number
 * Return: returns the number inputed
 * @n: inputable number
 */
void print_number(int n)
{
	unsigned int m;


	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
	{
		m = n;
	}

	if (m / 10)
	{
		print_number(m / 10)
	}
	_putchar((m % 10) + '0');
}
