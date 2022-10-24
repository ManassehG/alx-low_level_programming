#include <stdio.h>
/**
 * main - starting point
 * Return: Always 0 on success
 */
int main(void)
{
	int a;
	char th[] = "Fizz ";
	char fi[] = "Buzz ";
	char thfi[] = "FizzBuzz ";

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("%s", th);
		}
		else if (a % 5 == 0)
		{
			printf("%s", fi);
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("%s", thfi);
		}
		else
		{
			printf("%d", a);
		}

	}
	printf("\n ");
	return (0);
}

