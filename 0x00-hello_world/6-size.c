#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Sizes of a char: %lu byte(s)\n", sizeof(char));
	printf("Sizes of an int: %lu byte(s)\n", sizeof(int));
	printf("Sizes of a long int: %lu byte(s)\n", sizeof(long int)),
	printf("Sizes of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Sizes of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

