#include "main.h"

void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
		_putchar("%i, ", i);
	for (i = n; i > 98; i--)
		_putchar("%i, ", i);
	_putchar("98\n");
}
