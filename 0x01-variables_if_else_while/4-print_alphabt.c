#include <stdio.h>
/**
*main - prints all alphabets except e and q
*
*Return: 0 (success)
*/
int main(void)
{	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
