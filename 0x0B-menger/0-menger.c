#include "menger.h"
/**
 * menger - function that draws Menger Sponge in 2D
 * @level: takes int that prevsents box level
 */

void menger(int level)
{
	int boxSize;
	int center;

	boxSize = pow(3, level);
	center = boxSize / 3;
	for (int i = 0; i < boxSize; ++i)
	{
		for (int j = 0; j < boxSize; ++j)
		{
			if (i % 3 == 1 && j % 3 == 1)
				printf(" ");
			else if ( (i >= center && i <= center * 2 - 1) &&
				   	(j >= center && j <= center * 2 - 1))
				printf(" ");
			else
				printf("#");
		}
		printf("\n");
	}
}
