/**
 * File - strlen.c
 * Auth - Karis Dalton
 */

#include "main.h"

/*
 * _strlen - returns length of string passed
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return(len);
}
