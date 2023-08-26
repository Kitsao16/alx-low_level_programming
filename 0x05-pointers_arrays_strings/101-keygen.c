#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid passwords
 * for the program 101-crackme.
 * Return: Always 0
 */
int main(void)
{
	int pass[50];
	int i, j, sum;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 50; i++)
	{
		pass[i] = rand() % 65;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 65)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}
	return (0);
}
