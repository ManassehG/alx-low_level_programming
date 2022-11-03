#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: input
 * Return: String
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		putchar(*s);
		s++;
	}
}
