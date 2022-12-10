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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The last digit of %d is ", n);
	int last = n % 10;

	if (last > 5)
	{
		printf("%d and is greater than 5\n", last);
	}
	else if (last == 0)
	{
		printf("%d and is zero\n", last);
	}
	else if (last < 6 && last != 0)
	{
		printf("%d and is less than 6 and not 0\n", last);
	}
	return (0);
}
