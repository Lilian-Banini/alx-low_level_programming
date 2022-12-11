#include <stdio.h>
/**
*main - prints two pair digits
*without repeating any digit in a pair
*
*Return: 0 (success)
*/
int main(void)
{	int firstDigit;
	int secondDigit;

	for (firstDigit = 0; firstDigit <= 8; firstDigit++)
	{
		for (secondDigit = 1; secondDigit <= 9; secondDigit++)
		{
			if (firstDigit != secondDigit)
			{
				putchar(firstDigit + '0');
				putchar(secondDigit + '0');
				if (firstDigit != 8 || secondDigit != 9)
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
