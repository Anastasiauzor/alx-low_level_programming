#include "main.h"

/**
 * _strlen_recursion - function
 *
 * @s: parameter
 *
 * Return: zero
 */

int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s)
	{
		strlen++;
		strlen += _strlen_recursion(s + 1);
	}
	return (strlen);
}
