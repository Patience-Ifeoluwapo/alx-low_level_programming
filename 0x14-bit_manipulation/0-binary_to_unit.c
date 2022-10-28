#include "main.h"
/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: binary number
 * Return: the converted number or 0 if it fails
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int unit, place;
	int n;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
		;
	n--;
	{
		if (b[n] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[n] == '1')
		{
			unit += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (unit);
}
