#include <stdio.h>

/**
 * main - Print all possible combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int unit;
	int tens;
	int hundreds;

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (unit = '0'; unit <= '9'; unit++)
			{
				if (!((unit == tens) || (tens == hundreds) ||
							(tens > unit) || (hundreds > tens)))
				{
					putchar(hundreds);
					putchar(tens);
					putchar(unit);
					if (!(unit == '9' && tens == '8' && hundreds == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
