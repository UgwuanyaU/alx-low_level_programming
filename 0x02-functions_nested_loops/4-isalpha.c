#include "main.h"

/**
 * main - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else 
		return (0);
	_putchar ('\n');
}
