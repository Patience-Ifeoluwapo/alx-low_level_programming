#include "main.h"
#include <stdio.h>

/**
 * _strcpy - This function copies a string pointed to src and dest
 * @dest: pointer parameter
 * @src: pointer parameter
 * Author: Patience-Ifeoluwapo
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
