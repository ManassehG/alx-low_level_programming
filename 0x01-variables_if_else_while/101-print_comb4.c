#include <stdio.h>

/**
 * main - starting point of function
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			for (c = 1; c < 10; c++)
			{
				putchar(a % 10 + '0');
				putchar(b % 10 + '0');
				putchar(c % 10 + '0');
				if (a == 9 && b == 9 && c == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
