//*********************************************************
//*****      *******   *********    *******    ***      ***
//****   **********  *  ********  *  *****  *  ***  *******
//****   *   *****       *******  **  ***  **  ***      ***
//****   **  *****  ***   ******  ***  *  ***  ***  *******
//****       ****  ******  *****  ****   ****  ***      ***
//*********************************************************
//****  ***********  ********  ******  ********************
//****  ************  ******  *******  ********************
//****  *************  ****  ********  ********************
//****  **************  **  *********  ********************
//****        **********   **********        **************
//*********************************************************

#include "head_game.h"

void menu()
{
	printf("Selected level: \n 1. Level 1 (3 words)\n 2. Level 2 (4 words)\n 3. Level 3 (5 words) \n 0. Exit\n");
	printf("Enter the number 0-to exit or (1,2,3) - to start the game: ");
}

void upper_contour(int column)
{
	int j;

	j = 0;
	printf("-");
	while (j < column)
	{
		printf("----");
		j++;
	}
	printf(" \n");
}

void print_grid(char **grid, int line, int column)
{
	int i;
	int j;

	i = 0;
	while (i < line)
	{
		upper_contour(column);
		j = 0;
		while (j < column)
		{
			printf("| %c ", grid[i][j]);
			j++;
		}
		printf("|\n");
		i++;
	}
	upper_contour(column);
}

void game_start()
{
	int		res;
	char	**grid;

	res = 0;
	menu();
	while (scanf("%d", &res) == 1)
	{
		if (res == 1)
		{
			grid = create_grid_lvl_1();
			level_1(grid);
			menu();
			continue;
		}
		else if (res == 2)
		{
			grid = create_grid_lvl_2();
			level_2(grid);
			menu();
			continue;
		}
		else if (res == 3)
		{
			grid = create_grid_lvl_3();
			level_3(grid);
			menu();
			continue;
		}
		else if (res == 0)
		{
			printf("GOOOD LUCK SUPER BOY\n");
			break;
		}
		else
		{
			menu();
			continue;
		}
	}
}
