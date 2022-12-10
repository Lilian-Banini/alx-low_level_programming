#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - In main, rand function generates random number n,
*the last digit of n is obtained and checked whether
*against certain conditions
*
*Return: 0 (success)
*/
int main(void)
{	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is zero\n", lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}
	else
	{
		printf("%d and is 0\n", lastDigit);
	}
	return (0);
}
