#include "main.h"

/**
 * _puts - function
 * @str: parameter for strings
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

