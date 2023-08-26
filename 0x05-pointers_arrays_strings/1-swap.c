#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * @ctr: temporary variable
 */
void swap_int(int *a, int *b)
{
	int ctr;

	ctr = *a;
	*a = *b;
	*b = ctr;
}

