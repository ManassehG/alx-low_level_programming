#include "main.h"
/**
 * leet - fucyion that encodes a string in 1337
 * @s: string that is to be encoded to 1337
 * Return: the resulting string
 */
char *leet(char *s)
{
	int i, j;

	char *l = "aAeEoOtTlL";
	char *d = "4433007711";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == *(l + j))
			{
				*(s + i) = *(d + j);
			}
		}
	}
	return (s);
}
