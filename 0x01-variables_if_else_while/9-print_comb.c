#include <stdio.h>

/**
 * main - print all possible combinations
 * of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 100; num++)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	};
	putchar('\n');
	return (0);
}
