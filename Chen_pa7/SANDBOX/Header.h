#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <conio.h>

#define ADD 0
#define SUBTRACT 1
#define MULTIPLY 2
#define DIVIDE 3

#define EASY 1
#define	FAIR 2
#define	INTERMEDIATE 3
#define HARD 4
#define IMPOSSIBLE 5

#define YES 213490

void display_player_info (char initials[], int *score);
void signin_ascii (void);
void menu (int *menu_choice);
void program_instructions (void);
void menu_2 (int *menu_choice_2);
void generate_easy_problem (char *single_digit_numbers[], int *score);
void generate_fair_problem (char *single_digit_numbers[], int *score);
void generate_intermediate_problem (char *single_digit_numbers[], int *score);
void generate_hard_problem (int pos_neg_single_digit_numbers[], int *score);
void generate_impossible_problem (int pos_neg_single_digit_numbers[], int *score);

#endif

