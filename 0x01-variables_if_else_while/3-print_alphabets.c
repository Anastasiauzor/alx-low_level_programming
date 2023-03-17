#include <stdio.h>

/**
 * main - the main function in the c programme
 *
 * Return: always zero if successful
 */


int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
