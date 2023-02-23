#include "main.h"
/**
 * print_line - function that draws a straigh line
 * @n: number of times the character_should be printed
 * Return: Straight line in the terminal
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
