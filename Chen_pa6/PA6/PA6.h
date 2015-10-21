#ifndef PA6_H
#define PA6_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define YES 1
#define NO 0
#define HIT 1
#define MISS 0
#define TMP 't'
#define UNADJACENT 4
#define OVERLAP 5

typedef struct stats
{
	int num_misses;
	int num_hits;
	int total_shots;
	double hits_misses_ratio;
} Stats;

void display_rules(void);
void menu(int *menu_choice);
void init_game_board (char board[10][10], int num_rows, int num_cols);
void decide_who_goes_first (int *who_goes_first);
void get_ship_positions(char board[10][10], int length, char symbol, int *continue_or_not);
void print_board (char board[10][10], int num_rows, int num_cols);
void print_p2_board (char board[10][10], int num_rows, int num_cols);
void generate_direction (int *dir);
void generate_starting_point (int direction, int length, int *row, int *col);
void place_ship (char board[10][10], int row_start, int col_start, int direction, int length, char symbol, int *continue_or_not);
void shoot (char board[10][10], int *is_a_hit_or_not, int *row, int *col);
void computer_shoot(char board[10][10], int *is_a_hit_or_not, int *row, int *col);
void check_if_win_or_lose(char board[10][10], int player, int *who_goes_first, int *player_pointer);
void print_to_log (FILE *outfile, int *who_goes_first, int *move, int *row, int *column, int *is_a_hit_or_not, char *sunk_or_not);
void check_if_a_boat_has_sunk(char board[10][10], char *sunk_or_not, int *carrier_counter, int *battleship_counter, int *cruiser_counter, int *submarine_counter, int *destroyer_counter);
void check_if_a_boat_has_sunk_p2(char board[10][10], char *sunk_or_not, int *carrier_counter_2, int *battleship_counter_2, int *cruiser_counter_2, int *submarine_counter_2, int *destroyer_counter_2);
void update_stats (Stats *player_ptr, int *is_a_hit_or_not);

#endif