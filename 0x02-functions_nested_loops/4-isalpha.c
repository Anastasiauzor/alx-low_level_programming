#include "main.h"

/**
 * _isalpha - function
 *
 * @c: parameters
 *
 * Return: 1 if c is a letter, lowercase or uppercase else return 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
