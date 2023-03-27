#include "main.h"

/**
 * swap_int - function
 *
 * @a: parameter a
 * @b: parameter b
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
