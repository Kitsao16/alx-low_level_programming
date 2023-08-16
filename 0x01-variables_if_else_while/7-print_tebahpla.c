#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char ltr = 'z';

	do {
		putchar(ltr);
		ltr--;
	} while (ltr >= 'a');

	putchar('\n');
	return (0);
}
