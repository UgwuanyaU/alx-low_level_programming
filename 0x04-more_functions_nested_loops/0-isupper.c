#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the variable to be checked
 * Return: 1 if it's uppercase else return 0
 */

int _isupper(int c)
{
	if  (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
