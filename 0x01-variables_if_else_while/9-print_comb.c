#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	putchar('0');

	for (i = 1; i <= 9; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
