#include "main.h"
/**
 * _strncpy - copy one string to another
 * @dest: input pointer 1
 * @src: input pointer 2
 * @n: Size
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
