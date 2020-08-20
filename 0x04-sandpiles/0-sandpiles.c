#include "sandpiles.h"
/**
 *sandpiles_sum - compute the sum of two sandpiles after toppling if exists
 *@grid1: first sandpile
 *@grid2: second sandpile
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	const int true = 1, false = 0;
	int i, j, check = false;

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
		}
	while (check == false)
	{
		check = true;
		for (i = 0; i < 3; ++i)
			for (j = 0; j < 3; ++j)
			{
				if (grid1[i][j] >= 4)
				{
					printf("=\n");
					print_grid(grid1);
					grid1[i][j] = grid1[i][j] - 4;
					if (i + 1 < 3)
						grid1[i + 1][j] = grid1[i + 1][j] + 1;
					if (i - 1 >= 0)
						grid1[i - 1][j] = grid1[i - 1][j] + 1;
					if (j + 1 < 3)
						grid1[i][j + 1] = grid1[i][j + 1] + 1;
					if (j - 1 >= 0)
						grid1[i][j - 1] = grid1[i][j - 1] + 1;
				}
			}
		for (i = 0; i < 3; ++i)
			for (j = 0; j < 3; ++j)
			{
				if (grid1[i][j] >= 4)
				{
					check = false;
					break;
				}
			}
	}
}

/**
 *print_grid - prints a multi-dimensional array aka grid
 *@grid: grid to print
 */
static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}
