 /************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: 4											            	*
* Date: February 26, 2014															*
* Description: This program is the game of craps                        			*
************************************************************************************/

#include "Header.h"
//////////////////////////////////////////////////////////////////////////////////////////////////
void display_title (void)
{
	system ("cls");
	printf ("   _____________________________________________________________________   \n");
	printf ("  /   *                                                               * \\ \n");
	printf (" |  (    ^    *    *************************************     *   ^    )  | \n");
	printf (" |   )  ( )        **  ***** ***** ***** ***** *****  **        ( )  (   | \n");
	printf (" |  (  (   )   *   **  *     *   * *   * *   * *      **    *  (   )  )  | \n");
	printf (" |    (     )   )  **  *     ***** ***** ***** *****  **  (   (     )    | \n");
	printf (" | * (       ) (   **  *     *  *  *   * *         *  **   ) (       ) * | \n");
	printf (" |  (         )    **  ***** *   * *   * *     *****  **    (         )  | \n");
	printf (" | (___________)   ***********************by eric chen**   (___________) | \n");
	printf ("  \\_____________________________________________________________________/ \n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////
int main_menu (void)
{
	int menu_choice = 0;
	
	printf ("    -----------------------   Welcome to Craps!   -----------------------    \n");
	printf ("        -----------PRESS 1-   Display game rules.                            \n");
	printf ("            -------PRESS 2-   Play game.                                     \n");
	printf ("                ---PRESS 3-   Quit.										  \n");
	printf ("\n = ");
	scanf  ("%d", &menu_choice);

	return menu_choice;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
void display_rules (void)
{	
	system ("cls");
	printf ("   _______________________________________________________________________   \n");
	printf ("  /-------------------------- THE RULES OF CRAPS -------------------------\\ \n");
	printf (" |                                                                         | \n");
	printf (" |              Two dice are rolled and the sum is calculated.             | \n");
	printf (" |                          If the sum rolled is...                        | \n");
	printf (" |          ______________________________________________________         | \n");
	printf (" |                          - 7 or 11 - YOU WIN! -                         | \n");
	printf (" |                   - 2, 3, or 12 or 'Craps' - YOU LOSE. -                | \n");
	printf (" |           4, 5, 6, 8, 9, or 10 - the number becomes your POINT.         | \n");
	printf (" |          ______________________________________________________         | \n");
	printf (" |                                                                         | \n");
	printf (" |                              You roll again...                          | \n");
	printf (" |            Your POINT must be rolled again before you roll a 7          | \n");
	printf (" |                            or else YOU LOSE!                            | \n");
	printf (" |                If the amount of money you have reaches 0                | \n");
	printf (" |                              you also lose!                             | \n");
	printf (" |                                                                         | \n");
	printf (" | ---------------------------- USER INTERFACE --------------------------- | \n");
	printf (" |                You will be prompted to click any button                 | \n");
	printf (" |                  at various times to advance the game                   | \n");
	printf (" |                                                                         | \n");
	printf (" |                Press any key to return to the main menu                 | \n");
	printf (" |                                                                         | \n");
	printf ("  \\_______________________________________________________________________/ \n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////
double get_bank_balance (void)
{
	double balance = 0.0;
	draw_divider();
	printf (" Enter the bank balance for your game: ");
	scanf ("%lf", &balance);

	return balance;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
double get_wager_amount ()
{
	double wager;

	draw_divider();
	printf (" Enter the amount you wager: ");
	scanf ("%lf", &wager);

	return wager;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
int check_wager_amount (double wager, double balance)
{
	if (wager > balance)
	{
		return NO; // NO, insufficient balance
	}
	else if (balance > wager)
	{
		return YES; // YES
	}
	else if (balance == 0)
	{
		return QUIT; // no remaining balance
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////
int roll_die (void)
{
	int die_value = 0, roll = 0;

	die_value = (rand ()%6)+1;

	return die_value;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
int calculate_sum_dice (int die1_value, int die2_value)
{
	int sum_dice = 0;

	sum_dice = die1_value + die2_value;

	return sum_dice;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
int is_win_loss_or_point (int sum_dice)
{
	if ((sum_dice == 7) || (sum_dice == 11))
	{
		return YES;
	}
	else if ((sum_dice == 2) || (sum_dice == 3) || (sum_dice == 12))
	{
		return NO;
	}
	else
	{
		return CRAPS;
	}

}
//////////////////////////////////////////////////////////////////////////////////////////////////
void display_round_number (int current_round)
{
	printf (" ------------------------ ROUND %d ----------------------- \n", current_round);
}
//////////////////////////////////////////////////////////////////////////////////////////////////
int is_point_loss_or_neither (int sum_dice, int point)
{
	if (sum_dice == point)
	{
		return YES;
	}
	else if (sum_dice == 7)
	{
		return NO;
	}
	else
	{
		return CRAPS;
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////
double adjust_balance (double balance, double wager, int add_or_subtract)
{
	if (add_or_subtract == 1)
	{
		balance = balance + wager;	
	}
	else if (add_or_subtract == 0)
	{
		balance = balance - wager;
	}
	return balance;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
void chatter_messages (int current_round, int first_roll_result, int second_roll_result, double initial_balance, double balance)
{
	if (current_round > 1)
	{
		if (first_roll_result == YES)
		{
				draw_divider ();
				printf (" ""niiiiiice. look who's makin' bank! "" \n");
		}
		if (first_roll_result == NO)
		{
			if (second_roll_result == YES)
			{
				draw_divider ();
				printf (" ""niiiiiice. look who's makin' bank! "" \n");
			}
		}

		if (second_roll_result == NO)
		{
			if (initial_balance >= balance)
			{
				draw_divider ();
				printf (" ""someone's not doing so hot. perhaps if you wagered more.."" \n");
			}
		}
	}

	else if (current_round >= 10)
	{
		draw_divider ();
		printf (" ""Well, looks like someone has a gambling problem. "" \n");
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////
void draw_divider (void)
{
	printf ("----------------------------------------------------------\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////
void display_credits (void)
{
	printf ("\n            O===================================O \n");
	printf ("            |  Hope you enjoyed playing Craps!  | \n");
	printf ("            |       created by eric chen        | \n");
	printf ("            O===================================O \n");
}
///////////////////////////////////////////////////////////////////////////////////