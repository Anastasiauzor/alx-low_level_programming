#include "main.h"

/**
 * _strlen - function
 *
 * @s: parameter s
 *
 * Return: zero or string_i
 */

int _strlen(char *s)
{
	int string_i = 0;

	while (*s != '\0')
	{
		string_i++;
		s++;
	}
	return (string_i);
}
