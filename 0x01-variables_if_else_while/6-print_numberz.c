#include <stdio.h>

/**
 * main - Prints single digit numbers of base 10 from 0 to 9
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
