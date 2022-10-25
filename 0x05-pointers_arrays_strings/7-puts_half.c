#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints second half of an input
 * @str: input
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int a = 0, length, n;

	length = strlen(str);

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length + 1) / 2;
	}
	for (a = n; a < length; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
