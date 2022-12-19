#include "main.h"

/**
 * swap_int - the function that swaps the values of two  inttegers
 * @a: this is the first entry
 * @b: this is the second entry
 *
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
