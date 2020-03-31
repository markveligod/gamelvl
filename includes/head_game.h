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


#ifndef HEAD_GAME_H
#define HEAD_GAME_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void menu();
void upper_contour(int column);
void game_start();
void print_grid(char **grid, int line, int column);
void level_1(char **grid);
char **create_grid_lvl_1();
char **create_grid_lvl_2();
void level_2(char **grid);
char **create_grid_lvl_3();
void level_3(char **grid);

#endif
