#include "main.h"
/**
 * print_sign - 'Print 1 if is lowercase'
 * @n: Is and input
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}

	return (i);
}
