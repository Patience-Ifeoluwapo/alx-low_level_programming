#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Description: using the main function.
 * this program prints "Programming is alphabet"
 * Return: Always 0 is success
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
