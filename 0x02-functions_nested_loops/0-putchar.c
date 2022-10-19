#include "main.h"

/**
 * main - Starting point of function
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);

}
