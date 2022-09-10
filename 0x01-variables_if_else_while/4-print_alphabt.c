#include <stdio.h>
/**
 * main - print the alphabet in lower case
 *
 * this program prints "Programming is lower case"
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if ((ch) ! = 'e' && (ch) != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
