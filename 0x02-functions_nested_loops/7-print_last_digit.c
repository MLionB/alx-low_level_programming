#include "main.h"

/**
 * print_last_digit - function
 * @n: input
 * Return: last digit
 */
int print_last_digit(int n)
{
	int num;

	num = (n % 10);

	if (num < 0)
	{
		num = (-1 * num);
	}
	_putchar(num + '0');
	return (num);
}
