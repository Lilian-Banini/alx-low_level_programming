#include <stdio.h>
/**
*mian - Prints all digits with radix 10
*
*Return: 0 (success)
*/
int main(void)
{	int digits = 0;

	while (digits < 10)
	{
		printf("%d",digits);
		digits++;
	}
	putchar('\n');
	return (0);
}
