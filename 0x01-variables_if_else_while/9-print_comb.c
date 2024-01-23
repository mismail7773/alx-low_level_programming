#include <stdio.h>

/**
 * main - draft
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n != 58)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
		++n;
	}
	putchar(10);
	return (0);
}
