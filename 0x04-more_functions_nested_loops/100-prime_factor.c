#include <stdio.h>
#include <math.h>

/**
 * main -  prints the largest prime factor of the number 612852475143
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	long int number = 612852475143;
	long int largest;
	long int i;

	while (number % 2 == 0)
	{
		largest = 2;
		number /= 2;
	}

	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largest = i;
			number /= i;
		}
	}

	if (number > 2)
		largest = number;

	printf("%ld\n", largest);

	return (0);
}
