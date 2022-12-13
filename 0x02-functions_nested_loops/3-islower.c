#include "main.h"
/**
 *_islower(int c) - checks to see if
 *a char is lowercase or not
 *
 * Return: 1 (lowercase)
 * Return: 0 (not lowercase)
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{	
			return (1);
		}
	}
	return (0);
}
