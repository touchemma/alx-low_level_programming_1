#include "main,h"
/**
 * more_numbers - prints more mumbers
 *
 * Return: void
 */
void more_numbers(void)
{
	char n, c;
	int i = 0;
	while (i < 10)
	i{
	for (n = 0; n < 14; n++)
	{
		c = n;
		if (n > 9)
		{
			putchar('1');
			c = n % 10;
		}
		putchar('1');
		c = n % 10;
	}
	putchar('0' + c);
	}
	_putchar('\n');
	i++;
}
