#include "PA6.h"

int main (void)
{
	int direction = 0, who_goes_first, row_start = 0, col_start = 0, continue_or_not = 0, position_row = 0, position_col = 0,
		n = 0, m = 0, menu_choice = 0, is_a_hit_or_not = 0, row = 0, col = 0, lose_or_win = 0, move = 0, player_pointer = 0;

	double percent_missed, percent_hit, num_hits, num_misses, total_shots;

	int carrier_counter, battleship_counter, cruiser_counter, submarine_counter, destroyer_counter;
	int carrier_counter_2, battleship_counter_2, cruiser_counter_2, submarine_counter_2, destroyer_counter_2;

	char	player_1_board[10][10] = {{'\0', '\0'}, {'\0'}},
			player_2_board[10][10] = {{'\0', '\0'}, {'\0'}};
	char	sunk_or_not, sunk_or_not_p2;

	Stats p1_stats = {0, 0, 0, 0.0};
	Stats p2_stats = {0, 0, 0, 0.0};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// i/o
	FILE *outfile = NULL;

	outfile = fopen("battleship.log","w");

	if (outfile == NULL)
	{
		printf ("error opening battleship.log");
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	srand ((unsigned int) time (NULL));

	display_rules();
	printf("\n");
	system ("pause");
	system ("cls");

	init_game_board (player_1_board, 10, 10);
	init_game_board (player_2_board, 10, 10);

	menu(&menu_choice);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// if the user chooses to enter positions manually
	if (menu_choice == 1)	// manually
	{
		do 
		{
			get_ship_positions(player_1_board, 5, 'c' , &continue_or_not); //carrier
		} while (continue_or_not != 0);
//
		do
		{
			get_ship_positions(player_1_board, 4, 'b' , &continue_or_not); //battleship
		} while (continue_or_not != 0);
//
		do
		{	
			get_ship_positions(player_1_board, 3, 'r' , &continue_or_not); //cruiser
		} while (continue_or_not != 0);
//
		do
		{
			get_ship_positions(player_1_board, 3, 's' , &continue_or_not); //submarine
		} while (continue_or_not != 0);
//
		do
		{
		get_ship_positions(player_1_board, 2, 'd' , &continue_or_not); //destroyer			
		} while (continue_or_not != 0);
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// if the user choose to enter positions randomly
	if (menu_choice == 2)	// randomly
	{
		generate_direction(&direction);
		do
		{
			generate_starting_point (direction, 5, &row_start, &col_start);		// carrier
			place_ship (player_1_board, row_start, col_start, direction, 5, 'c', &continue_or_not);
		}while (continue_or_not != 0);
//
		generate_direction(&direction);
		do
		{
			generate_starting_point (direction, 4, &row_start, &col_start);		// battleship and address of row start and col start
			place_ship (player_1_board, row_start, col_start, direction, 4, 'b', &continue_or_not);
		}while (continue_or_not != 0);
//
		generate_direction(&direction);
		do
		{
			generate_starting_point (direction, 3, &row_start, &col_start);		// cruiser
			place_ship (player_1_board, row_start, col_start, direction, 3, 'r', &continue_or_not);
		}while (continue_or_not != 0);
//
		generate_direction(&direction);
		do
		{
			generate_starting_point (direction, 3, &row_start, &col_start);		// submarine
			place_ship (player_1_board, row_start, col_start, direction, 3, 's', &continue_or_not);
		}while(continue_or_not != 0);
//
		generate_direction(&direction);
		do
		{
			generate_starting_point (direction, 2, &row_start, &col_start);		// destroyer
			place_ship (player_1_board, row_start, col_start, direction, 2, 'd', &continue_or_not);
		}while (continue_or_not != 0);
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// generate player 2's board
	do
	{
	generate_direction(&direction);
		generate_starting_point (direction, 5, &row_start, &col_start);		// carrier
		place_ship (player_2_board, row_start, col_start, direction, 5, 'c', &continue_or_not);
	}while (continue_or_not != 0);
//
	generate_direction(&direction);
	do
	{
		generate_starting_point (direction, 4, &row_start, &col_start);		// battleship and address of row start and col start
		place_ship (player_2_board, row_start, col_start, direction, 4, 'b', &continue_or_not);
	}while (continue_or_not != 0);
//
	generate_direction(&direction);
	do
	{
		generate_starting_point (direction, 3, &row_start, &col_start);		// cruiser
		place_ship (player_2_board, row_start, col_start, direction, 3, 'r', &continue_or_not);
	}while (continue_or_not != 0);
//
	generate_direction(&direction);
	do
	{
		generate_starting_point (direction, 3, &row_start, &col_start);		// submarine
		place_ship (player_2_board, row_start, col_start, direction, 3, 's', &continue_or_not);
	}while(continue_or_not != 0);
//
	generate_direction(&direction);
	do
	{
		generate_starting_point (direction, 2, &row_start, &col_start);		// destroyer
		place_ship (player_2_board, row_start, col_start, direction, 2, 'd', &continue_or_not);
	}while (continue_or_not != 0);
	printf("*************************************************\n");
	printf("Player 2's (Computer's) board has been generated.\n");
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// picks who goes first
	decide_who_goes_first(&who_goes_first);
	if (who_goes_first == 0)
	{
		printf("*************************************************\n");
		printf("Player 1 has been randomly selected to go first\n");
	}
	if (who_goes_first == 1)
	{
			printf("*************************************************\n");
		printf("Player 2 has been randomly selected to go first\n");
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// prints player one's board
	printf("*************************************************\n");
	printf("\nPlayer 1's Board:\n\n");
	print_board (player_1_board, 10, 10);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// prints player 2's board
	printf("\n*************************************************\n");
	printf("\nPlayer 2's Board:\n\n");
	print_board(player_2_board, 10, 10);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf("\n");
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	do
	{
		move++;
		if (who_goes_first == 0) // player 1 goes first
		{
			shoot(player_2_board, &is_a_hit_or_not, &row, &col);
			check_if_a_boat_has_sunk(player_2_board, &sunk_or_not, &carrier_counter, &battleship_counter,
									&cruiser_counter, &submarine_counter, &destroyer_counter);
			print_to_log(outfile, &who_goes_first, &move, &row, &col, &is_a_hit_or_not, &sunk_or_not);
			update_stats (&p1_stats, &is_a_hit_or_not);
			system("cls");
		}
		else if (who_goes_first == 1) // player 2
		{
			computer_shoot(player_1_board, &is_a_hit_or_not, &row, &col);
			check_if_a_boat_has_sunk_p2(player_1_board, &sunk_or_not, &carrier_counter_2, &battleship_counter_2,
									&cruiser_counter_2, &submarine_counter_2, &destroyer_counter_2);
			print_to_log(outfile, &who_goes_first, &move, &row, &col, &is_a_hit_or_not, &sunk_or_not);
			update_stats (&p2_stats, &is_a_hit_or_not);
			printf("Player Selects: %d, %d\n", row, col);
		}

		if (is_a_hit_or_not == NO)	// MISS
		{
			printf("*******************\n");
			printf(" %d, %d is a miss. \n", row, col);
			printf("*******************\n");
			system("pause");
			system("cls");
		}
		else if (is_a_hit_or_not == YES)	// HIT
		{
			printf("*******************\n");
			printf(" %d, %d is a hit!  \n", row, col);
			printf("*******************\n");
			system("pause");
			system("cls");
		}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// prints player one's board
		printf("\nPlayer 1's Board:\n\n");
		print_board (player_1_board, 10, 10);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// prints player 2's board
		printf("\n*************************************************\n");
		printf("\nPlayer 2's Board:\n\n");
		print_board(player_2_board, 10, 10);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		check_if_win_or_lose(player_1_board, 2, &who_goes_first, &player_pointer);
		check_if_win_or_lose(player_2_board, 1, &who_goes_first, &player_pointer);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if (who_goes_first == 1)
		{
			who_goes_first = 0;
		}
		else if (who_goes_first == 0)
		{
			who_goes_first = 1;
		}
		printf("\n");
	} while ((who_goes_first == 0)||(who_goes_first == 1));

	fprintf (outfile, "Player 1 stats:\n");
	fprintf (outfile, "Number of misses: %d\n", p1_stats.num_misses);
	fprintf (outfile, "Number of hits: %d\n", p1_stats.num_hits);
	fprintf (outfile, "Total number of shots: %d\n", p1_stats.total_shots);
	total_shots = p1_stats.total_shots;
	num_misses = p1_stats.num_misses;
	num_hits = p1_stats.num_hits;
	percent_missed = num_misses/total_shots;
	percent_hit = num_hits/total_shots;
	fprintf(outfile, "Percent missed: %3.2lf\n", percent_missed*100);
	fprintf(outfile, "Percent hit: %3.2lf\n\n", percent_hit*100);

	fprintf (outfile, "Player 2 stats:\n");
	fprintf (outfile, "Number of misses: %d\n", p2_stats.num_misses);
	fprintf (outfile, "Number of hits: %d\n", p2_stats.num_hits);
	fprintf (outfile, "Total number of shots: %d\n", p2_stats.total_shots);
	total_shots = p2_stats.total_shots;
	num_misses = p2_stats.num_misses;
	num_hits = p2_stats.num_hits;
	percent_missed = num_misses/total_shots;
	percent_hit = num_hits/total_shots;
	fprintf(outfile, "Percent missed: %3.2lf\n", percent_missed*100);
	fprintf(outfile, "Percent hit: %3.2lf\n\n", percent_hit*100);

	fprintf(outfile, "Player %d won\n", player_pointer);

	fclose (outfile);
	printf("Statistics outputted to log file successfully!");

	_getch();
	return 0;
}