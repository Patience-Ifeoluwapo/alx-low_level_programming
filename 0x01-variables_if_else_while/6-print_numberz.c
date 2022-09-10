#include <stdio.h>
/**
 * main - print numbers between 0 to 9
 *
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
