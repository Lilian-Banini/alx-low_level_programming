#include <stdio.h>
/**
*main - prints digits separated by comma
*
*Return: 0 (success)
*/
int main(void)
{	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	return (0);
}
