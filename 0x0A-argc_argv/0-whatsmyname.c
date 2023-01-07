#include <stdio.h>
/**
 * main - prints the name of aprogram
 * @argc: array size
 * @argv: array containing element
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	puts(argv[argc - 1]);
	return (0);
}
