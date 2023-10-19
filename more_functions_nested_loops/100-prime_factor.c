#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long prime_factor = 612852475143, dividend;

	while (dividend < (prime_factor / 2))
	{
		if ((prime_factor % 2) == 0)
		{
			prime_factor /= 2;
			continue;
		}

		for (dividend = 3; dividend < (prime_factor / 2); dividend += 2)
		{
			if ((prime_factor % dividend) == 0)
				prime_factor /= dividend;
		}
	}

	printf("%ld\n", prime_factor);

	return (0);
}
