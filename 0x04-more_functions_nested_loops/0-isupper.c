#include "main.h"
/**
*_isupper - checks whether a character
*passed to it is lowercase or uppercase
*character.
*
*@c : character to be checked
*
*Return: 1 (uppercase), 0 (lowercase)
*/
int _isupper(int c)
{
	c = c + 0;

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (c == alphabet)
		{
			return (0);
		}
	}
	return (1);
}
