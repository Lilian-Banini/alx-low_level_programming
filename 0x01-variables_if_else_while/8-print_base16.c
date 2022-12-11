#include <stdio.h>
/**
*main - prints all the digit of 
*the radix 16 number system
*
*Return: 0 (success)
*/
int main(void)
{	char letter;

	int number;

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		while (number <= 9)
		{
			putchar(number + '0');
			number++;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
