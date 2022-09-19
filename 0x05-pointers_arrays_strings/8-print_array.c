/**
 * File - 8-print_array.c
 *
 * Auth: Karis Dalton
 */
#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the number of elements of an array followed by a new line
 *
 * @a, @n - parameters
 *
 * Return: void
 */
void print_array(int *a, int n);
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; n > i; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}
