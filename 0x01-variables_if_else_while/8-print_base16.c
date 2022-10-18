#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int num;

	char lett;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (lett = 'a'; lett <= 'f'; lett++)
	{
		putchar(lett);
	}
	putchar('\n');
	return (0);
}
