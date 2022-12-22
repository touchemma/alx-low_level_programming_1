include "main.h"

/**
 * _strcmp - compapares pointer to two strings
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: if str1 < str2, the negative difference of the first unmatched char
 * if str == str2,
 * if str1 > str2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*str && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
