#include "main.h"
/**
 *print_last_digit - returns last digit of n
 *
 *@n: - number to be operated on
 *
 *Return: last_digit of n (success)
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}
