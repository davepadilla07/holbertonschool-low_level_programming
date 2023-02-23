#include "main.h"
/**
 * _islower - 'Print 1 if is lowercase'
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	char i;
	int l = 0;

	for (i = 'a'; i < 'z'; i++)
	{
		if (i == c)
		{
			l = 1;
		}
	}

	return (l);
}
