#include "main.h"
/**
 * _isalpha - 'Print 1 if is lowercase'
 * @c: Is and input
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	char low, up;
	int i = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == low || c == up)
			{
				i = 1;
			}
		}
	}

	return (i);
}
