#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for ALX School students.
 * @str: input
 * Return: string
 *
 */
char *_strdup(char *str)
{
	int a, size;
	char *array;
	
	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; size <= *str; size++)
	{
	}
	size += 1;
	array = malloc(sizeof(*str) * size);
	for (a = 0; a <= size; a++)
	{
		array[a] = str[a];
	}
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
