#include <stdio.h>

/**
 * main - print all possible combinations
 * of two digits
 * Return: Always 0
 */
int main(void)
{
	int unit;
	int tens;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (unit = '0'; unit <= '9'; unit++)
		{
			if (!((unit == tens) || (tens > unit)))
			{
				putchar(tens);
				putchar(unit);
				if (!(unit == '9' && tens == '8'))
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
