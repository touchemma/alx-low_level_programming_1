#include "main.h"

/**
 * _put - write a function that prints a string, followed by a new ,
 * to stout.
 *
 * @str: the input string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
