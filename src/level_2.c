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

char **create_grid_lvl_2()
{
	int line = 4;
	int column = 6;
	int i = 0;
	char **array;

	array = (char **)malloc((line) * sizeof(char *));
	while (i < line)
	{
		array[i] = (char *)malloc(column * sizeof(char));
		i++;
	}
	array[0][0] = 'F';
	array[0][1] = 'L';
	array[0][2] = 'O';
	array[0][3] = 'B';
	array[0][4] = 'L';
	array[0][5] = 'A';
	array[1][0] = 'L';
	array[1][1] = 'A';
	array[1][2] = 'W';
	array[1][3] = 'E';
	array[1][4] = 'R';
	array[1][5] = 'N';
	array[2][0] = 'E';
	array[2][1] = 'R';
	array[2][2] = 'D';
	array[2][3] = 'T';
	array[2][4] = 'E';
	array[2][5] = 'K';
	array[3][0] = 'R';
	array[3][1] = 'U';
	array[3][2] = 'T';
	array[3][3] = 'C';
	array[3][4] = 'I';
	array[3][5] = 'P';
	return (array);
}

void level_2(char **grid)
{
	int		word_main = 0;
	char	word[24];
	int		flag_flower = 0;
	int		flag_blanket = 0;
	int		flag_picture = 0;
	int		flag_lard = 0;
	int		flag_law = 0;
	int		flag_low = 0;
	int		flag_flow = 0;
	int		flag_blank = 0;
	int		flag_reward = 0;
	int		flag_raw = 0;
	int		flag_drawer = 0;
	int		flag_were = 0;
	int		score = 0;

	while (word_main != 4)
	{
		printf("\nLevel 2\n\nYour score: %d\n\n", score);
		print_grid(grid, 4, 6);
		printf("\nType the any word(or enter 'exit' for the end game): ");
		scanf("%s", word);
		if (strcmp(word, "Exit") == 0 || strcmp(word, "exit") == 0 || strcmp(word, "EXIT") == 0)
			break;
		if ((strcmp(word, "flower") == 0 || strcmp(word, "Flower") == 0 || strcmp(word, "FLOWER") == 0) && flag_flower == 0)
		{
			printf("\nYEEEEES it's FLOWER\n +100 point's\n");
			score += 100;
			word_main++;
			flag_flower = 1;
			grid[0][0] = '*';
			grid[0][1] = '*';
			grid[0][2] = '*';
			grid[1][2] = '*';
			grid[1][3] = '*';
			grid[1][4] = '*';
		}
		else if ((strcmp(word, "blanket") == 0 || strcmp(word, "Blanket") == 0 || strcmp(word, "BLANKET") == 0) && flag_blanket == 0)
		{
			printf("\nYEEEEES it's BLANKET\n +100 point's\n");
			score += 100;
			word_main++;
			flag_blanket = 1;
			grid[0][3] = '*';
			grid[0][4] = '*';
			grid[0][5] = '*';
			grid[1][5] = '*';
			grid[2][5] = '*';
			grid[2][4] = '*';
			grid[2][3] = '*';
		}
		else if ((strcmp(word, "picture") == 0 || strcmp(word, "Picture") == 0 || strcmp(word, "PICTURE") == 0) && flag_picture == 0)
		{
			printf("\nYEEEEES it's PICTURE\n +100 point's\n");
			score += 100;
			word_main++;
			flag_picture = 1;
			grid[3][5] = '*';
			grid[3][4] = '*';
			grid[3][3] = '*';
			grid[3][2] = '*';
			grid[3][1] = '*';
			grid[3][0] = '*';
			grid[2][0] = '*';
		}
		else if ((strcmp(word, "lard") == 0 || strcmp(word, "Lard") == 0 || strcmp(word, "LARD") == 0) && flag_lard == 0)
		{
			printf("\nYEEEEES it's LARD\n +100 point's\n");
			score += 100;
			word_main++;
			flag_lard = 1;
			grid[1][0] = '*';
			grid[1][1] = '*';
			grid[2][1] = '*';
			grid[2][2] = '*';
		}
		else if ((strcmp(word, "law") == 0 || strcmp(word, "Law") == 0 || strcmp(word, "LAW") == 0) && flag_law == 0 && flag_lard == 0 && flag_flower == 0)
		{
			printf("\nThere is a word 'LAW' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_law = 1;
		}
		else if ((strcmp(word, "low") == 0 || strcmp(word, "Low") == 0 || strcmp(word, "LOW") == 0) && flag_low == 0 && flag_flower == 0)
		{
			printf("\nThere is a word 'LOW' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_low = 1;
		}
		else if ((strcmp(word, "flow") == 0 || strcmp(word, "Flow") == 0 || strcmp(word, "FLOW") == 0) && flag_flow == 0 && flag_flower == 0)
		{
			printf("\nThere is a word 'FLOW' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_flow = 1;
		}
		else if ((strcmp(word, "blank") == 0 || strcmp(word, "Blank") == 0 || strcmp(word, "BLANK") == 0) && flag_blank == 0 && flag_blank == 0)
		{
			printf("\nThere is a word 'BLANK' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_blank = 1;
		}
		else if ((strcmp(word, "reward") == 0 || strcmp(word, "Reward") == 0 || strcmp(word, "REWARD") == 0) && flag_reward == 0 && flag_flower == 0 && flag_lard == 0)
		{
			printf("\nThere is a word 'REWARD' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_reward = 1;
		}
		else if ((strcmp(word, "raw") == 0 || strcmp(word, "Raw") == 0 || strcmp(word, "RAW") == 0) && flag_raw == 0 && flag_flower == 0 && flag_lard == 0)
		{
			printf("\nThere is a word 'RAW' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_raw = 1;
		}
		else if ((strcmp(word, "drawer") == 0 || strcmp(word, "Drawer") == 0 || strcmp(word, "DRAWER") == 0) && flag_drawer == 0 && flag_flower == 0 && flag_lard == 0)
		{
			printf("\nThere is a word 'DRAWER' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_drawer = 1;
		}
		else if ((strcmp(word, "were") == 0 || strcmp(word, "Were") == 0 || strcmp(word, "WERE") == 0) && flag_were == 0 && flag_flower == 0 && flag_blanket == 0)
		{
			printf("\nThere is a word 'WERE' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_were = 1;
		}
		else
		{
			printf("This word does not exist or it has already been found. Try again!\n");
		}
	}
	printf("You scored %d points on level 2\n\n", score);
	free(grid);
}
