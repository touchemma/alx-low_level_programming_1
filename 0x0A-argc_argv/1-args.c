#include <stdio.h>
/**
 * main - print number of arguments passed to program
 * @argc: arrays size
 * @argv: array containing elements
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)(argv);
	printf("%d\n", argc - 1);

	return (0);
}
