#include <stdio.h>
#include "main.h"
/**
 * Print_numbers - function that print all numbers from 0 to 9
 * @n: The number to print
 * Return: return void
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
