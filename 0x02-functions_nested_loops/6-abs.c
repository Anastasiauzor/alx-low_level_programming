#include "main.h"

/**
 *  _abs - function
 *
 *  @a: parameters
 *
 *  Return: 0
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
	_putchar('\n');

}
