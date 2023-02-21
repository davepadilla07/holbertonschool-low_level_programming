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
	char lettr;

	for (lettr = 'z'; lettr <= 'a'; lettr--)
	{

		putchar(lettr);

	}
	putchar('\n');
	return (0);
}
