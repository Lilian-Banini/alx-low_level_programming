#include <stdio.h>
/**
*main - prints digits from 0 to 9
*
*Return: 0 (success)
*/
int main(void)
{	int number = 0;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
