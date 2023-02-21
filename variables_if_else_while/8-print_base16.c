#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char lettr;

	for (i = '0'; i <= '9'; i++)
	{

		putchar(i);

	}
	for (lettr = 'a'; lettr <= 'f'; lettr++)
	{

		putchar(lettr);

	}
	putchar('\n');
	return (0);
}
