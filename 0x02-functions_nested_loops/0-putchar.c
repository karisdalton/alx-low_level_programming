#include "main.h"

/**
 * main function prints _putchar
 *
 * Return 0 is true otherwise nonzero
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for(i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return 0;

}
