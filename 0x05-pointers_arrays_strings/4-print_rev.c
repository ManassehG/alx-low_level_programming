#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - reverses a string
 * @s: input
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int a, length;

	length = strlen(s);

	for (a = length - 1; a >= 0; a--)
	{
		printf("%c", s[a]);
	}
}
