#include " main.h"

/**
 * rev_string - function that reverses a string
 * @s: the string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int var;

	while (s[count] != '\0')
	{
		counter++;
	}

	for (var = 0; var < count; var++)
	{
		count--;
		rev = s[var];
		s[var] = s[count];
		s[count] = rev;
	}
}
