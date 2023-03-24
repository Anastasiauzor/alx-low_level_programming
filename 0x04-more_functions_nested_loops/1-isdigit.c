#include "main.h"

/**
 * _isdigit - function
 *
 * @c: parameters
 *
 * Return: zero if successful
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
