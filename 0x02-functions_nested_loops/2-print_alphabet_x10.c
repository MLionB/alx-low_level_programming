#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * Retrn: void
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
