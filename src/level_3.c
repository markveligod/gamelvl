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

char **create_grid_lvl_3()
{
	int		line = 4;
	int		column = 5;
	int		i = 0;
	char	**array;

	array = (char **)malloc((line) * sizeof(char *));
	while (i < line)
	{
		array[i] = (char *)malloc(column * sizeof(char));
		i++;
	}
	array[0][0] = 'E';
	array[0][1] = 'V';
	array[0][2] = 'O';
	array[0][3] = 'L';
	array[0][4] = 'A';
	array[1][0] = 'C';
	array[1][1] = 'A';
	array[1][2] = 'R';
	array[1][3] = 'D';
	array[1][4] = 'I';
	array[2][0] = 'T';
	array[2][1] = 'E';
	array[2][2] = 'P';
	array[2][3] = 'O';
	array[2][4] = 'R';
	array[3][0] = 'G';
	array[3][1] = 'O';
	array[3][2] = 'D';
	array[3][3] = 'O';
	array[3][4] = 'F';
	return (array);
}

void level_3(char **grid)
{
	int		word_main = 0;
	int		word_other = 0;
	char	word[24];
	int		flag_carpet = 0;
	int		flag_love = 0;
	int		flag_air = 0;
	int		flag_food = 0;
	int		flag_dog = 0;
	int		flag_peace = 0;
	int		flag_tea = 0;
	int		flag_go = 0;
	int		flag_old = 0;
	int		flag_roof = 0;
	int		flag_god = 0;
	int		flag_car = 0;
	int		flag_cave = 0;
	int		flag_lord = 0;
	int		flag_rove = 0;
	int		flag_race = 0;
	int		flag_card = 0;
	int		flag_rope = 0;
	int		flag_rod = 0;
	int		flag_prove = 0;
	int		flag_laid = 0;
	int		flag_poof = 0;
	int		flag_pear = 0;
	int		flag_act = 0;
	int		score = 0;

	while (word_main != 5)
	{
		printf("\nLevel 3\n\nYour score: %d\n\n", score);
		print_grid(grid, 4, 5);
		printf("\nType the any word(or enter 'exit' for the end game): ");
		scanf("%s", word);
		if (strcmp(word, "Exit") == 0 || strcmp(word, "exit") == 0 || strcmp(word, "EXIT") == 0)
			break;
		if ((strcmp(word, "carpet") == 0 || strcmp(word, "Carpet") == 0 || strcmp(word, "CARPET") == 0) && flag_carpet == 0)
		{
			printf("\nYEEEEES it's CARPET\n +100 point's\n");
			score += 100;
			word_main++;
			flag_carpet = 1;
			grid[1][0] = '*';
			grid[1][1] = '*';
			grid[1][2] = '*';
			grid[2][0] = '*';
			grid[2][1] = '*';
			grid[2][2] = '*';
		}
		else if ((strcmp(word, "love") == 0 || strcmp(word, "Love") == 0 || strcmp(word, "LOVE") == 0) && flag_love == 0)
		{
			printf("\nYEEEEES it's LOVE\n +100 point's\n");
			score += 100;
			word_main++;
			flag_love = 1;
			grid[0][0] = '*';
			grid[0][1] = '*';
			grid[0][2] = '*';
			grid[0][3] = '*';
		}
		else if ((strcmp(word, "air") == 0 || strcmp(word, "Air") == 0 || strcmp(word, "AIR") == 0) && flag_air == 0)
		{
			printf("\nYEEEEES it's AIR\n +100 point's\n");
			score += 100;
			word_main++;
			flag_air = 1;
			grid[0][4] = '*';
			grid[1][4] = '*';
			grid[2][4] = '*';
		}
		else if ((strcmp(word, "food") == 0 || strcmp(word, "Food") == 0 || strcmp(word, "FOOD") == 0) && flag_food == 0)
		{
			printf("\nYEEEEES it's FOOD\n +100 point's\n");
			score += 100;
			word_main++;
			flag_food = 1;
			grid[3][4] = '*';
			grid[3][3] = '*';
			grid[2][3] = '*';
			grid[1][3] = '*';
		}
		else if ((strcmp(word, "dog") == 0 || strcmp(word, "Dog") == 0 || strcmp(word, "DOG") == 0) && flag_dog == 0)
		{
			printf("\nYEEEEES it's DOG\n +100 point's\n");
			score += 100;
			word_main++;
			flag_dog = 1;
			grid[3][0] = '*';
			grid[3][1] = '*';
			grid[3][2] = '*';
		}
		else if ((strcmp(word, "peace") == 0 || strcmp(word, "Peace") == 0 || strcmp(word, "PEACE") == 0) && flag_peace == 0 && flag_carpet == 0 && flag_love == 0)
		{
			printf("\nThere is a word 'PEACE' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_peace = 1;
		}
		else if ((strcmp(word, "tea") == 0 || strcmp(word, "Tea") == 0 || strcmp(word, "TEA") == 0) && flag_tea == 0 && flag_carpet == 0)
		{
			printf("\nThere is a word 'TEA' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_tea = 1;
		}
		else if ((strcmp(word, "go") == 0 || strcmp(word, "Go") == 0 || strcmp(word, "GO") == 0) && flag_go == 0 && flag_dog == 0)
		{
			printf("\nThere is a word 'GO' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_go = 1;
		}
		else if ((strcmp(word, "old") == 0 || strcmp(word, "Old") == 0 || strcmp(word, "OLD") == 0) && flag_old == 0 && flag_love == 0 && flag_food == 0)
		{
			printf("\nThere is a word 'OLD' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_old = 1;
		}
		else if ((strcmp(word, "roof") == 0 || strcmp(word, "Roof") == 0 || strcmp(word, "ROOF") == 0) && flag_roof == 0 && flag_air == 0 && flag_food == 0)
		{
			printf("\nThere is a word 'ROOF' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_roof = 1;
		}
		else if ((strcmp(word, "god") == 0 || strcmp(word, "God") == 0 || strcmp(word, "GOD") == 0) && flag_god == 0 && flag_dog == 0)
		{
			printf("\nThere is a word 'GOD' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_god = 1;
		}
		else if ((strcmp(word, "car") == 0 || strcmp(word, "Car") == 0 || strcmp(word, "CAR") == 0) && flag_car == 0 && flag_carpet == 0)
		{
			printf("\nThere is a word 'CAR' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_car = 1;
		}
		else if ((strcmp(word, "cave") == 0 || strcmp(word, "Cave") == 0 || strcmp(word, "CAVE") == 0) && flag_cave == 0 && flag_carpet == 0 && flag_love == 0)
		{
			printf("\nThere is a word 'CAVE' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_cave = 1;
		}
		else if ((strcmp(word, "lord") == 0 || strcmp(word, "Lord") == 0 || strcmp(word, "LORD") == 0) && flag_lord == 0 && flag_love == 0 && flag_carpet == 0 && flag_food == 0)
		{
			printf("\nThere is a word 'LORD' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_lord = 1;
		}
		else if ((strcmp(word, "rove") == 0 || strcmp(word, "Rove") == 0 || strcmp(word, "ROVE") == 0) && flag_rove == 0 && flag_carpet == 0 && flag_love == 0)
		{
			printf("\nThere is a word 'ROVE' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_rove = 1;
		}
		else if ((strcmp(word, "race") == 0 || strcmp(word, "Race") == 0 || strcmp(word, "RACE") == 0) && flag_race == 0 && flag_carpet == 0 && flag_love == 0)
		{
			printf("\nThere is a word 'RACE' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_race = 1;
		}
		else if ((strcmp(word, "card") == 0 || strcmp(word, "Card") == 0 || strcmp(word, "CARD") == 0) && flag_card == 0 && flag_carpet == 0 && flag_food == 0)
		{
			printf("\nThere is a word 'CARD' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_card = 1;
		}
		else if ((strcmp(word, "rope") == 0 || strcmp(word, "Rope") == 0 || strcmp(word, "ROPE") == 0) && flag_rope == 0 && flag_air == 0 && flag_food == 0 && flag_carpet == 0)
		{
			printf("\nThere is a word 'ROPE' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_rope = 1;
		}
		else if ((strcmp(word, "rod") == 0 || strcmp(word, "Rod") == 0 || strcmp(word, "ROD") == 0) && flag_rod == 0 && flag_air == 0 && flag_food == 0)
		{
			printf("\nThere is a word 'ROD' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_rod = 1;
		}
		else if ((strcmp(word, "prove") == 0 || strcmp(word, "Prove") == 0 || strcmp(word, "PROVE") == 0) && flag_prove == 0 && flag_carpet == 0 && flag_love == 0)
		{
			printf("\nThere is a word 'PROVE' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_prove = 1;
		}
		else if ((strcmp(word, "laid") == 0 || strcmp(word, "Laid") == 0 || strcmp(word, "LAID") == 0) && flag_laid == 0 && flag_love == 0 && flag_air == 0 && flag_food == 0)
		{
			printf("\nThere is a word 'LAID' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_laid = 1;
		}
		else if ((strcmp(word, "poof") == 0 || strcmp(word, "Poof") == 0 || strcmp(word, "POOF") == 0) && flag_poof == 0 && flag_carpet == 0 && flag_food == 0)
		{
			printf("\nThere is a word 'POOF' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_poof = 1;
		}
		else if ((strcmp(word, "pear") == 0 || strcmp(word, "Pear") == 0 || strcmp(word, "PEAR") == 0) && flag_pear == 0 && flag_carpet == 0)
		{
			printf("\nThere is a word 'PEAR' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_pear = 1;
		}
		else if ((strcmp(word, "act") == 0 || strcmp(word, "Act") == 0 || strcmp(word, "ACT") == 0) && flag_act == 0 && flag_carpet == 0)
		{
			printf("\nThere is a word 'PEAR' but it is not a keyword \n+50 point's\n");
			score += 50;
			flag_act = 1;
		}
		else
		{
			printf("This word does not exist or it has already been found. Try again!\n");
		}
	}
	printf("You scored %d points on level 3\n\n", score);
	free(grid);
}
