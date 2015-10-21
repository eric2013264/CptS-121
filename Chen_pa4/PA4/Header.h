#ifndef HEADER_H
#define HEADER_H
///////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
//////////////////////////////////////////////////////////////////////////////////////////////////
#define NO 0
#define YES 1
#define CRAPS -1
#define DISPLAY 1
#define PLAY 2
#define QUIT 374		// quit program (break out of do-while loop)
//////////////////////////////////////////////////////////////////////////////////////////////////
void display_title (void);
int main_menu (void);
void display_rules (void);
void display_round_number (int current_round);
double get_bank_balance (void); 						// part 1
double get_wager_amount (); 							// part 2
int check_wager_amount (double wager, double balance);	// part 3
int roll_die (void);
int calculate_sum_dice (int die1_value, int die2_value);// part 4
int is_win_loss_or_point (int sum_dice);				// part 5
int is_point_loss_or_neither (int sum_dice, int point);
double adjust_balance (double balance, double wager, int add_or_subtract);
void chatter_messages (int current_round, int first_roll_result, int second_roll_result, double initial_balance, double balance);
void draw_divider(void);
void display_credits (void);
//////////////////////////////////////////////////////////////////////////////////////////////////
#endif