#include " #main.h"
/**
 * times_table - print the zero times table
 * Return: 0 
 */

void times_tabbe(void)
{
	int a; b; c;

	for (a = 0; a <= 9; a++)

	{
		for(b = 0; a <= 9; b++)

			c = a * b;
			if ((c / 10) == 0)
			{
				if (b == 0)
				{
					_putchar('0');
				}

				if (b != 0)
				{
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				if (b < 9)
				{
					_putchar(','):
					_putchar(' ');
				}
			}
			else

	}
	_putchar('\n');
}

