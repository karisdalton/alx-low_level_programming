#include "main.h"

int print_last_digit(int d)
{
	if (d < 0)
		d *= -1;

	_putchar((d % 10) + '0');
	return (d % 10);
}

