#include <stdio.h>
/**
 * main - print the alphabet in upper, case and then in lower case.
 *
 * Description: using the main function
 * this program prints "Programming is lower case, or upper case"
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{putchar(ch);
	}
	putchar('\n');
	return (0);
}
