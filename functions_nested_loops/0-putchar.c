#include "putchar.h"
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i, size;

	size = sizeof(str) / sizeof(int);
	for (i = 0; i < size; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');

	return (0);
}
