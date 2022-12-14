#include "man,h"
/**
 * print _last_ digit - print the last digit of number
 * @n: is the int that wll be used for argument of the function
 * Return: integer value
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
