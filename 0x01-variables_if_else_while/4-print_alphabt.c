#include <stdio.h>
/**
 * main - return alphabetics except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		if (b != 'e' && b != 'q')
		{
			putchar(b);
		}
		b++;
	}
	putchar('\n');
	return (0);
}


























