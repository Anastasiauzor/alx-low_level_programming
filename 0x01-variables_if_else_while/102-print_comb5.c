#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always zero
 */

int main(void)
{
	char i;

	for (i = '00' ; i < 100 ; i++)
		putchar(i + '0');
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);

}
