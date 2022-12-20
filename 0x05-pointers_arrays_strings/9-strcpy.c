#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copies the string pointer toby src,
 * including the terminating null byte, to the 
 * buffer pointed to by desk
 * @desk: destination
 * @src: source
 * Return: the pointer to the desk.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(desk + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++
	}
            return (desk);
}
