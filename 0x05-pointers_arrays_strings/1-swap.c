#include "main.h"

/**
 * swap_int - the function that swaps the values of two  inttegers
 * @a: the first entry
 * @b: the second entry
 *
 */
void swap_int(int a*, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
