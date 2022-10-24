#include "main.h"
/**
 * print_square - function to print square
 *
 * @size: input number of times to print square
 * Return: squar shape
 */
void print_square(int size)
{
	int co, ro;
	
	if (size > 0)
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
