#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - prints every other number
 * @str: Input
 *
 * Return: every other number in twos
 */
void puts2(char *str)
{
	int a, length;


	length = strlen(str);
	for (a = 0; a < length; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
