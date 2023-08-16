#include <stdio.h>
/**
 * main - Prints both the lower and uppercase alphabet
 *
 * Return: Always 0
 */
int main(void)
{
char ltr[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(ltr[i]);
	}
	putchar('\n');
	return (0);
}
