#include "menger.h"
/**
 * menger - function that draws Menger Sponge in 2D
 * @level: takes int that prevsents box level
 */

void menger(int level)
{
	if (level == 0)
		printf("#\n");
	if (level == 1)
	{
		drawBox();
	}
}

void drawBox()
{
	char  *box = "#";
	int level = 1;

	if (level == 1)
	{
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (j == 1 && i == 1)
					printf(" ");
				else
					printf("%s", box);
			}
			printf("\n");
		}
	}
}
