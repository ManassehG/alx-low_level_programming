#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starting point of code
 * Return: always 0 on success
 * void - no return value
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i ", n);
	lastDigit = n % 10;
	printf("is %d ", lastDigit);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
