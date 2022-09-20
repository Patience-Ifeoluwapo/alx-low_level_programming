#include "main.h"
#include <stdio.h>

/**
 * _strlen - Functions for counting the length of string
 * @s: a pointer for counting the string length
 * Author: Patience-Ifeoluwapo
 * Return: int i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
