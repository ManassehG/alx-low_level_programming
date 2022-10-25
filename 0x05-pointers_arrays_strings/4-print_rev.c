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
	int g, leng;

	leng = strlen(s);

	for (g = leng - 1 ; g >= 0; g--)
	{
		printf("%c", s[g]);
	}
	printf("\n");
}
