#include "main.h"

/**
 * print_last_digit - function
 *
 * @a: parameter
 *
 * Return: b when successful
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
	_putchar('\n');
}
