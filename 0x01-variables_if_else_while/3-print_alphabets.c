#include <stdio.h>
/**
*main - prints lowercase alphabets
*followed by uppercase alphabets
*
*Return: 0 (succes)
*/
int main(void)
{	char lowerCase = 'a';

	char upperCase = 'A';

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
	{
		putchar(upperCase);
	}
	putchar('\n');
	return (0);
}
