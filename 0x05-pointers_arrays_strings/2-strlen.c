#include "holberton.h"

/**
 * _strlen - the length of a string
 * @s: the string
 * Return: de value of c
 */

int _strlen(char *s)
{
	int c;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
