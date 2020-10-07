#include "menger.h"
/**
 * menger - function that draws Menger Sponge in 2D
 * @level: takes int that prevsents box level
 */

void menger(int level)
{
	int boxSize;

	boxSize = pow(3, level);
	for (int i = 0; i < boxSize; ++i)
	{
		for (int j = 0; j < boxSize; ++j)
		{
			printf("%s", drawBox(i, j));
		}
		printf("\n");
	}
}

/**
 * drawBox - sets character to print
 * @i: takes integer
 * @j: takes integer
 * Return: "#" or " "
 */
char *drawBox(int i, int j)
{
	int k, l;

	for (k = i, l = j; k && l; k = k / 3, l = l / 3)
	{
		if (k % 3 == 1 && l % 3 == 1)
			return (" ");
	}
	return ("#");
}
