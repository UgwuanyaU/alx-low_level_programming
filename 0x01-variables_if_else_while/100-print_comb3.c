#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints tens digit */
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints ones digit */
		{
			if (!((ones == tens) || (tens > ones)))/*elimination repitition */
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*adds comma and space */
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
