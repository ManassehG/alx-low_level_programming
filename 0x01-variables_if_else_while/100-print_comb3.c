#include <stdio.h>
/**
 * main - starting poiunt of function
 *
 * Return: ALways 0 on success
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			putchar(a % 10 + '0');
			putchar(b % 10 + '0');
			if (a == 9 && b == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}

	printf("\n");
	return (0);
}
