#include "main.h"
/**
 * print_alphabet - 'Printing the alphabet in lowercase'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void) /* 'Printing the alphabet in lowercase' */
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
