#include "main.h"
/**
 * factorial - prints the factorial of a number
 * @n: input
 * Return: factorial result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	int a;

	a = n * factorial(n - 1);
	return (a);
}
