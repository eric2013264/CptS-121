 /************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: PA6 Battleship											*
* Date: Apr 1, 2014															     	*
* Description: This program is the game of Battleship								*
************************************************************************************/

// 3/25 implemented computer generated overlap detection
// 3/26 implemented player input overlap detection
//		menu
//		randomly assigning player positions

// still need to implement:
// -shooting
// -log


#include "PA6.h"

void display_rules(void)
{
	printf("***** Welcome to Battleship! *****\n");
	printf("created by Eric Chen\n\n");
	printf("Rules of the Game:\n");
	printf("1. This is a two player game.\n");
	printf("2. Player 1 is you and Player 2 is the computer.\n");
	printf("3. Each player places their 5 ships on their board.\n");
	printf("4. Players take turns selecting positions on a grid to shoot at.\n");
	printf("5. Sink player 2's ships before player 2 sinks yours!\n");
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menu(int *menu_choice)
{
	printf("Please select from the following menu:\n\n");
	printf("1. Enter positions of ships manually.\n");
	printf("2. Allow the program to randomly select position of ships.\n");
	scanf("%d", menu_choice);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void init_game_board (char board[10][10], int num_rows, int num_cols)
{
	int row_index = 0, col_index = 0;

	for (row_index = 0; row_index < num_rows; row_index++)
	{
		for (col_index = 0; col_index < num_cols; col_index++)
		{
			board[row_index][col_index] = '~';
		}
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void get_ship_positions(char board[10][10], int length, char symbol, int *continue_or_not)
{
	int index = 0, a = 0, b = 0, position_row = 0, position_col = 0;

	*continue_or_not = 0;
///////////////////////////////////////////////////////////////////////////////////////////////////////
// prompt
	if (symbol == 'c')
	{
		printf("Please enter the five cells to place the Carrier across:\n");
	}
	if (symbol == 'b')
	{
		printf("Please enter the five cells to place the Battleship across:\n");
	}
	if (symbol == 'r')
	{
		printf("Please enter the five cells to place the Cruiser across:\n");
	}
	if (symbol == 's')
	{
		printf("Please enter the five cells to place the Submarine across:\n");
	}
	if (symbol == 'd')
	{
		printf("Please enter the five cells to place the Destroyer across:\n");
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////
// setting to tmp
	for (index = 0; index < length; index++)
	{
		scanf(" %d%d", &position_row, &position_col);
		if (board[position_row][position_col] == '~')
		{
			board[position_row][position_col] = TMP;
		}
		else
		{
			*continue_or_not = OVERLAP;
		}
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////
// overlap check
	if (*continue_or_not == 0)	// no overlap
	{
		for (a = 0; a < 10; a++)
		{
			for (b = 0; b < 10; b++)
			{
				if (board[a][b] == TMP)
				{
					if ((board[a+1][b] != TMP)&&	// final adjacent cell test
						(board[a-1][b] != TMP)&&	// cell bolow
						(board[a][b+1] != TMP)&&	// cell to the right
						(board[a][b-1] != TMP))		// cell to the left
					{								
						*continue_or_not = UNADJACENT;	// 20 is a unqiue value that is used in the overlap check
					}
				}
			}
		}
	}

	if (*continue_or_not == 0)	// no overlap
	{
		for (a = 0; a < 10; a++)
		{
			for (b = 0; b < 10; b++)
			{
				if (board[a][b] == TMP)
				{
					{
						board[a][b] = symbol;
					}
				}
			}
		}
	}

	if (*continue_or_not == OVERLAP)	// at least one overlap
	{
		printf("overlap detected\n");
		for (a = 0; a < 10; a++)
		{
			for (b = 0; b < 10; b++)
			{
				if (board[a][b] == TMP)
				{
					board[a][b] = '~';
				}
			}
		}
	}

	if (*continue_or_not == UNADJACENT)	// un adjacent cell positions check failed, cells marked with tmp are reset
	{
		printf("positions are not adjacent cells\n");
		for (a = 0; a < 10; a++)
		{
			for (b = 0; b < 10; b++)
			{
				if (board[a][b] == TMP)
				{
					board[a][b] = '~';
				}
			}
		}
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void print_board (char board[10][10], int num_rows, int num_cols)
{
	int row_index = 0, col_index = 0;

	printf ("  0 1 2 3 4 5 6 7 8 9\n");

	for (row_index = 0; row_index < num_rows; row_index++)
	{
		printf ("%d ", row_index);
		for (col_index = 0; col_index < num_cols; col_index++)
		{
			if (board[row_index][col_index] == '~')
			{
				printf ("- ");
			}
			else if (board[row_index][col_index] == 'c')
			{
				printf ("c ");
			}
			else if (board[row_index][col_index] == 'b')
			{
				printf ("b ");
			}
			else if (board[row_index][col_index] == 'r')
			{
				printf ("r ");
			}
			else if (board[row_index][col_index] == 's')
			{
				printf ("s ");
			}
			else if (board[row_index][col_index] == 'd')
			{
				printf ("d ");
			}
			else if (board[row_index][col_index] == 'm')
			{
				printf ("m ");
			}
			else if (board[row_index][col_index] == '*')
			{
				printf ("* ");
			}
		}
		putchar ('\n');
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void print_p2_board (char board[10][10], int num_rows, int num_cols)
{
	int row_index = 0, col_index = 0;

	printf ("  0 1 2 3 4 5 6 7 8 9\n");

	for (row_index = 0; row_index < num_rows; row_index++)
	{
		printf ("%d ", row_index);
		for (col_index = 0; col_index < num_cols; col_index++)
		{
			if (board[row_index][col_index] == '~')
			{
				printf ("- ");
			}
			else if (board[row_index][col_index] == 'c')
			{
				printf ("- ");
			}
			else if (board[row_index][col_index] == 'b')
			{
				printf ("- ");
			}
			else if (board[row_index][col_index] == 'r')
			{
				printf ("- ");
			}
			else if (board[row_index][col_index] == 's')
			{
				printf ("- ");
			}
			else if (board[row_index][col_index] == 'd')
			{
				printf ("- ");
			}
			else if (board[row_index][col_index] == 'm')
			{
				printf ("m ");
			}
			else if (board[row_index][col_index] == '*')
			{
				printf ("* ");
			}
		}
		putchar ('\n');
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void generate_direction (int *direction)
{
	*direction = rand () % 2;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void decide_who_goes_first (int *who_goes_first)
{
	*who_goes_first = rand () % 2;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void generate_starting_point (int direction, int length, int *row, int *col)
{
	if (direction)	// vertical. so we might go too far down, restrict row number
	{
		*row = (rand () % (10 - length + 1));	// by modding the length + 1, the furthest starting point can be is 6
		*col = rand () % 10;
	}
	else			// horizontal, restrict column
	{
		*row = rand () % 10;
		*col = (rand () % (10 - length + 1));
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void place_ship (char board[10][10], int row_start, int col_start, int direction, int length, char symbol, int *continue_or_not)
{
	// accessing consecutive cells, use loop.
	int index = 0;
//CHECK FOR OVERLAP///////////////////////////////////////////////////////////////////////////////////////////////////
	*continue_or_not = 0;	
	for (index = 0; index < length; index++)
	{
		switch (direction)
		{
			case 0:	
			{
				if (board[row_start][col_start + index] == '~')	// horizontal
				{
					*continue_or_not += 0;
				}
				else
				{
					*continue_or_not += 1;
				}
			}
			case 1:	
			{
				if (board[row_start + index][col_start] == '~')	// vertical
				{
					*continue_or_not += 0;
				}
				else
				{
					*continue_or_not += 1;
				}
			}
		}
	}
//IF NO OVERLAP//////////////////////////////////////////////////////////////////////////////////////////////////////
	if (*continue_or_not == 0)
	{
		for (index = 0; index < length; index++)
		{
			switch (direction)
			{
				case 0:	
						board[row_start][col_start + index]	= symbol;	// horizontal
						break;
				case 1:
						board[row_start + index][col_start] = symbol;	// vertical
						break;
			}
		}
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void shoot (char board[10][10], int *is_a_hit_or_not, int *row, int *col)
{
	int n = 0, m = 0, local_row, local_col;

	do
	{
		printf("\nenter a target: \n");
		scanf(" %d%d", &local_row, &local_col);
		*row = local_row;
		*col = local_col;
		if ((board[*row][*col] == '*')||(board[*row][*col] == 'm'))
		{
			printf("duplicate position, choose another: \n");
			*row = -1;
			*col = -1;
		}
		else if ((*row < 0)||(*row > 9)||(*col < 0)||(*col > 9))
		{
			printf("invalid position, choose another: \n");
			*row = -1;
			*col = -1;
		}
	} while ((*row < 0)||(*row > 9)||(*col < 0)||(*col > 9));

	if (board[*row][*col] != '~')
	{
		*is_a_hit_or_not = YES;	// HIT
		board[*row][*col] = '*';
	}
	else if (board[*row][*col] == '~')
	{
		*is_a_hit_or_not = NO; 	// MISS
		board[*row][*col] = 'm';
	}

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void computer_shoot(char board[10][10], int *is_a_hit_or_not, int *row, int *col)
{
	int n = 0, m = 0, has_valid_target = 0;

	do
	{
		*row = rand () % 10;
		*col = rand () % 10;
		if ((board[*row][*col] == '*')||(board[*row][*col] == 'm'))
		{
			has_valid_target = NO;
		}
		else
		{
			has_valid_target = YES;
		}
	} while (has_valid_target == NO);

	if (board[*row][*col] != '~')
	{
		*is_a_hit_or_not = HIT;	// HIT
		board[*row][*col] = '*';
	}
	else if (board[*row][*col] == '~')
	{
	*is_a_hit_or_not = MISS; 	// MISS
	board[*row][*col] = 'm';
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void check_if_win_or_lose(char board[10][10], int player, int *who_goes_first, int *player_pointer)
{
	int row = 0, column = 0, lose_or_win = 0;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
				if ((board[row][column] == 'c')||(board[row][column] == 'b')||(board[row][column] == 'r')||(board[row][column] == 's')||(board[row][column] == 'd'))
				{
					lose_or_win++;
				}
		}
	}

	if (lose_or_win == 0)
	{
		printf("\nplayer %d wins!", player);
		*player_pointer = player;
		*who_goes_first = 3;	// quits the main do-while
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void print_to_log (FILE *outfile, int *who_goes_first, int *move, int *row, int *column, int *is_a_hit_or_not, char *sunk_or_not)
{
	char hit_or_not = '\0';

	if (*is_a_hit_or_not == YES) 
	{
		hit_or_not = 'h';
	}	
	else if (*is_a_hit_or_not == NO) 
	{
		hit_or_not = 'm';
	}

	fprintf(outfile, "Player: %d    Move: %d    Targetted position: %d, %d    Hit/Miss: %c   Boat Sunk: %c\n", *who_goes_first+1, *move, *row, *column, hit_or_not, *sunk_or_not);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// check how many cells of everything are left
void check_if_a_boat_has_sunk(char board[10][10], char *sunk_or_not, int *carrier_counter, int *battleship_counter,
							int *cruiser_counter, int *submarine_counter, int *destroyer_counter)
{
	int row = 0, column = 0;

	*sunk_or_not = 'n';

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
				if (board[row][column] == 'c')
				{
					*carrier_counter = 1;
				}
				else if (board[row][column] == 'b')
				{
					*battleship_counter = 1;
				}
				else if (board[row][column] == 'r')
				{
					*cruiser_counter = 1;
				}
				else if (board[row][column] == 's')
				{
					*submarine_counter = 1;
				}
				else if (board[row][column] == 'd')
				{
					*destroyer_counter = 1;
				}
		}
	}

	if (*carrier_counter == 0)	// none left
	{
		*sunk_or_not = 'y';
		*carrier_counter = 3;
	}
	if (*carrier_counter == 1)
	{
		*carrier_counter = 0;	// reset
	}

	if (*battleship_counter == 0)
	{
		*sunk_or_not = 'y';
		*battleship_counter = 3;
	}
	if (*battleship_counter == 1)
	{
		*battleship_counter = 0;
	}

	if (*cruiser_counter == 0)
	{
		*sunk_or_not = 'y';
		*cruiser_counter = 3;
	}
	if (*cruiser_counter == 1)
	{
		*cruiser_counter = 0;
	}

	if (*submarine_counter == 0)
	{
		*sunk_or_not = 'y';
		*submarine_counter = 3;
	}
	if (*submarine_counter == 1)
	{
		*submarine_counter = 0;
	}

	if (*destroyer_counter == 0)
	{
		*sunk_or_not = 'y';
		*destroyer_counter = 3;
	}
	if (*destroyer_counter == 1)
	{
		*destroyer_counter = 0;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// check how many cells of everything are left
void check_if_a_boat_has_sunk_p2(char board[10][10], char *sunk_or_not_2, int *carrier_counter_2, int *battleship_counter_2,
							int *cruiser_counter_2, int *submarine_counter_2, int *destroyer_counter_2)
{
	int row = 0, column = 0;

	*sunk_or_not_2 = 'n';

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
				if (board[row][column] == 'c')
				{
					*carrier_counter_2 = 1;
				}
				else if (board[row][column] == 'b')
				{
					*battleship_counter_2 = 1;
				}
				else if (board[row][column] == 'r')
				{
					*cruiser_counter_2 = 1;
				}
				else if (board[row][column] == 's')
				{
					*submarine_counter_2 = 1;
				}
				else if (board[row][column] == 'd')
				{
					*destroyer_counter_2 = 1;
				}
		}
	}

	if (*carrier_counter_2 == 0)	// none left
	{
		*sunk_or_not_2 = 'y';
		*carrier_counter_2 = 3;
	}
	if (*carrier_counter_2 == 1)
	{
		*carrier_counter_2 = 0;	// reset
	}

	if (*battleship_counter_2 == 0)
	{
		*sunk_or_not_2 = 'y';
		*battleship_counter_2 = 3;
	}
	if (*battleship_counter_2 == 1)
	{
		*battleship_counter_2 = 0;
	}

	if (*cruiser_counter_2 == 0)
	{
		*sunk_or_not_2 = 'y';
		*cruiser_counter_2 = 3;
	}
	if (*cruiser_counter_2 == 1)
	{
		*cruiser_counter_2 = 0;
	}

	if (*submarine_counter_2 == 0)
	{
		*sunk_or_not_2 = 'y';
		*submarine_counter_2 = 3;
	}
	if (*submarine_counter_2 == 1)
	{
		*submarine_counter_2 = 0;
	}

	if (*destroyer_counter_2 == 0)
	{
		*sunk_or_not_2 = 'y';
		*destroyer_counter_2 = 3;
	}
	if (*destroyer_counter_2 == 1)
	{
		*destroyer_counter_2 = 0;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// write to struct
void update_stats (Stats *player_ptr, int *is_a_hit_or_not)
{
	if (*is_a_hit_or_not == YES)
	{
		(*player_ptr).num_hits += 1;
	}
	else // miss
	{
		player_ptr->num_misses += 1;
	}

	player_ptr->total_shots += 1;
}