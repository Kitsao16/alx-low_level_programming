#include <stdio.h>

/**
 * main - Prints numbers in base of 10 which is 0 to 9
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	putchar('\n');
	return (0);
}
