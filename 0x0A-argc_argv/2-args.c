#include <stdio.h>

/**
 * main - starting point
 * Return: 0
 * @argc: count for the arguements
 * @argv: one dimensional vector
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

