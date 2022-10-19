#include <stdio.h>

/**
 * main - print possible combinations
 * of two two digit numbers
 * Return: Always 0
 */
int main(void)
{
	int set1;
	int set2;

	for (set1 = 0; set1 < 100; set1++)
	{
		for (set2 = 0; set2 < 100; set2++)
		{
			if (set1 < set2)
			{
				putchar((set1 / 10 + 48));
				putchar((set1 % 10 + 48));
				putchar(' ');
				putchar((set2 / 10 + 48));
				putchar((set2 % 10 + 48));
				if (set1 != 98 || set2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
