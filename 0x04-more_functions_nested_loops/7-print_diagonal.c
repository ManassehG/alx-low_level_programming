#include "main.h"
/**
 * print_diagonal - function to draw diagonal
 * @n: input number of times to print '\'
 * Return: diagonal shape
 */
void print_diagonal(int n)
{
	int co, sp;

	if (n > 0)
	{
		 for (co = 1; co <= n; co++)
		 {
			 for (sp = 1; sp < co; sp++)
			 {
				 _putchar(' ');
			 }
			 _putchar('\\');
			 _putchar('\n');
		 }
	}
	else
	{
		_putchar('\n');
	}
}
