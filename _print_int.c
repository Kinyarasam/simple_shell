#include "main.h"

/**
 * _print_int - prints an integer.
 * @number: Number to print.
 * Return: Nothing.
 */

void _print_int(int number)
{
	unsigned int i, abs, tmp = 1, count = 0;

	if (number < 0)
	{
		count += _putchar('-');
		i = number * -1;
	}
	else
		i = number;
	abs = i;
	tmp = 1;

	while (abs > 9)
	{
		abs /= 10;
		tmp *= 10;
	}
	for (; tmp >= 1; tmp /= 10)
		count += _putchar(((i / tmp) % 10) + '0');
}
