/**
 * File - 9-strcpy.c
 *
 * Auth: Karis
 */
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest - parameter: buffer to copy to
 * @src - parameter: pointer dereferencing a string
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
