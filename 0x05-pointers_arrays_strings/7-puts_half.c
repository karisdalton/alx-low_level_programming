/**
 * File - 7-puts_half.c
 *
 * Auth: Karis Dalton
 */
#include "main.h"

/**
 * puts_half - prints half of a string followed by new line
 *
 * @str - parameter
 *
 * Returns: void
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
