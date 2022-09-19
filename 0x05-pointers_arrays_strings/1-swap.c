/**
 * File - 1-swap.c
 * Auth - Karis Dalton
 */
#include "main.h"

/**
 * swap_int - swaps values of int a and int b
 *
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
