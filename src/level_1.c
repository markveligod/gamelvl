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

char **create_grid_lvl_1()
{
	int line;
	int column;
	int i;
	char **array;

	line = 4;
	column = 5;
	i = 0;

	array = (char **)malloc((line) * sizeof(char *));
	while (i < line)
	{
		array[i] = (char *)malloc(column * sizeof(char));
		i++;
	}
	array[0][0] = 'G';
	array[0][1] = 'R';
	array[0][2] = 'A';
	array[0][3] = 'M';
	array[0][4] = 'M';
	array[1][0] = 'O';
	array[1][1] = 'H';
	array[1][2] = 'E';
	array[1][3] = 'L';
	array[1][4] = 'L';
	array[2][0] = 'R';
	array[2][1] = 'R';
	array[2][2] = 'E';
	array[2][3] = 'T';
	array[2][4] = 'U';
	array[3][0] = 'P';
	array[3][1] = 'C';
	array[3][2] = 'O';
	array[3][3] = 'M';
	array[3][4] = 'P';
	return (array);
}

void level_1(char **grid)
{
	int		word_main;
	int		word_other;
	char	word[20];
	int		flag_prog;
	int		flag_hell;
	int		flag_comp;
	int		score;
	int		flag_pull;

	word_main = 0;
	flag_prog = 0;
	flag_hell = 0;
	flag_comp = 0;
	flag_pull = 0;
	score = 0;
	while (word_main != 3)
	{
		printf("\nLevel 1\n\nYour score: %d\n\n", score);
		print_grid(grid, 4, 5);
		printf("\nType the any word(or enter 'exit' for the end game): ");
		scanf("%s", word);
		if (strcmp(word, "Exit") == 0 || strcmp(word, "exit") == 0 || strcmp(word, "EXIT") == 0)
			break;
		if ((strcmp(word, "programm") == 0 || strcmp(word, "Programm") == 0 || strcmp(word, "PROGRAMM") == 0) && flag_prog == 0)
		{
			printf("\nYEEEEES it's PROGRAMM\n +100 point's\n");
			score += 100;
			flag_prog = 1;
			word_main++;
			grid[3][0] = '*';
			grid[2][0] = '*';
			grid[1][0] = '*';
			grid[0][0] = '*';
			grid[0][1] = '*';
			grid[0][2] = '*';
			grid[0][3] = '*';
			grid[0][4] = '*';
		}
		else if ((strcmp(word, "hell") == 0 || strcmp(word, "Hell") == 0 || strcmp(word, "HELL") == 0) && flag_hell == 0)
		{
			printf("\nYEEEEES it's HELL\n +100 point's\n");
			score += 100;
			flag_hell = 1;
			word_main++;
			grid[1][1] = '*';
			grid[1][2] = '*';
			grid[1][3] = '*';
			grid[1][4] = '*';
		}
		else if ((strcmp(word, "computer") == 0 || strcmp(word, "Computer") == 0 || strcmp(word, "COMPUTER") == 0) && flag_comp == 0)
		{
			printf("\nYEEEEES it's COMPUTER\n +100 point's\n");
			score += 100;
			flag_comp = 1;
			word_main++;
			grid[2][1] = '*';
			grid[2][2] = '*';
			grid[2][3] = '*';
			grid[2][4] = '*';
			grid[3][1] = '*';
			grid[3][2] = '*';
			grid[3][3] = '*';
			grid[3][4] = '*';
		}
		else if ((strcmp(word, "pull") == 0 || strcmp(word, "Pull") == 0 || strcmp(word, "PULL") == 0) && flag_pull == 0 && flag_comp == 0 && flag_hell == 0)
		{
			printf("\nThere is a word 'PULL' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_pull = 1;
		}
		else
		{
			printf("This word does not exist or it has already been found. Try again!\n");
		}
	}
	printf("You scored %d points on level 1\n\n", score);
	free(grid);
}
