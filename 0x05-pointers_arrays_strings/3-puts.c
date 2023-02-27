#include "main.h"
/**
 * _puts - unction that prints a string, followed by a new line, to stdout
 * @str: string
 */
void _puts(char *str)
{
	whilei (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
