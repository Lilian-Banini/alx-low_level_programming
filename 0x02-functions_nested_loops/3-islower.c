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

	int lower = 0;

	for (i = 97; i <= 122; i++)
	{
		if (i = c)
		{	
			lower++;
			break;
		}
	}
	if (lower)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
