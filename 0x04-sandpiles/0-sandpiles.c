#include "sandpiles.h"
/**
 *sandpiles_sum - compute the sum of two sandpiles after toppling if exists
 *@grid1: first sandpile
 *@grid2: second sandpile
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int grid_sum[3][3];
	int i, j, verified = 0;

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
		{
			grid_sum[i][j] = grid1[i][j] + grid2[i][j];
		}
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
		{
			grid1[i][j] = grid_sum[i][j];
		}

	while (verified == 0)
	{
		for (i = 0; i < 3; ++i)
			for (j = 0; j < 3; ++j)
			{
				if (grid1[i][j] >= 4)
				{
					print_grid(grid1);
					grid1[i][j] = grid1[i][j] - 4;
					if (grid1[i + 1][j])
						grid1[i + 1][j] = grid1[i + 1][j] + 1;
					if (grid1[i - 1][j])
						grid1[i - 1][j] = grid1[i - 1][j] + 1;
					if (grid1[i][j + 1])
						grid1[i][j + 1] = grid1[i][j + 1] + 1;
					if (grid1[i][j - 1])
						grid1[i][j - 1] = grid1[i][j - 1] + 1;
				}
			}
		for (i = 0; i < 3; ++i)
			for (j = 0; j < 3; ++j)
			{
				if (grid1[i][j] < 4)
					verified = 0;
				else if (grid1[i][j] >= 4)
					verified = 1;
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
