#include "holberton.h"

/**
 * _strcat - concatenate tow strings
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	return (dest);
}
