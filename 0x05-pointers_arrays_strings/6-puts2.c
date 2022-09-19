/**
 * File - 6-puts2.c
 *
 * Auth: Karis Dalton
 */
#include "main.h"

/**
 * puts2 - prints every other character of a string followed by new line
 *
 * @str - parameter
 *
 * Returns: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
