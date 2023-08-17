#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters a to f
 *
 * Return: Always 0
 */
int main(void)
{
	char hex[] = "0123456789abcdef";
	
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hex[i]);
	}

	putchar('\n');
	return (0);
}
