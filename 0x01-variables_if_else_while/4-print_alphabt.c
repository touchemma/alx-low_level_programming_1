#include <stdio.h>
#include <stdlib.h>
/**
 * main - return alphabets but except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		putchar('\n');
		return (0);
	}
}
