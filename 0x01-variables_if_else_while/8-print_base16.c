#include <stdio.h>
/**
 * main - Prints hexadecimals from 0 to 9 and lowercase letter between a to f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex = '0';

	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
