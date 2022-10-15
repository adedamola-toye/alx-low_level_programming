#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * except q and e
 * Return: Always 0
 */

int main(void)
{
	int lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);

	}
	putchar('\n');

	return (0);
}
