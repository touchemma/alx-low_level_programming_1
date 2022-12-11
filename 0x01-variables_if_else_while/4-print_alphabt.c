#include <stdio.h>
#include <stdlib.h>
/**
 * main - return alphabets both except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'q') && (ch != 'e'))
		{
			putchar(ch);
		}
		putchar('\n');
		return (0);
	}
}
