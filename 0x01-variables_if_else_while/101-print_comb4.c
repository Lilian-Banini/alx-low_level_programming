#include <stdio.h>
/**
*main - prints three pair digits
*without repeating any digit in a pair
*
*Return: 0 (success)
*/
int main(void)
{	int firstDigit;
	int secondDigit;
	int thirdDigit;

	for (firstDigit = 0; firstDigit <= 7; firstDigit++)
	{
		for (secondDigit = 1; secondDigit <= 8; secondDigit++)
		{
			for (thirdDigit = 2; thirdDigit <= 9; thirdDigit++)
			{
				if (firstDigit < secondDigit && secondDigit < thirdDigit)
				{
					putchar(firstDigit + '0');
					putchar(secondDigit + '0');
					putchar(thirdDigit + '0');
					if (firstDigit != 7 || secondDigit != 8 || thirdDigit != 9)
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
