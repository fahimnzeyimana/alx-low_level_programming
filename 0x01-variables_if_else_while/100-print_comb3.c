#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;
	int i = 0;

	for (n = 1 ; n < 89 ; n++)
	{
		putchar(n / 10 + '0');
		putchar(i + '0');
		if (n < 89)
		{
			putchar(',');
			putchar(32);
		}
		i++;
		if (i > 9)
		{
			i = 0;
		}
	}
	putchar('\n');
	return (0);
}

