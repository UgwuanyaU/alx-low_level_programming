#include "main.h"
/**
 * print_most_numbers - Print 0 to 9 and do not print 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
