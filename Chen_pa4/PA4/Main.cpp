#include "Header.h"

int main (void)
{

	int 	menu_choice = 0, choice = 999, current_round = 0, answer = 0,
			die1_value = 0, die2_value = 0, sum_dice = 0, first_roll_result = 0, second_roll_result = 0,
			point = 0, add_or_subtract = 0.0;
	double 	initial_balance = 0.0, balance = 0.0, wager = 0.0;

	do
	{
////////MAIN DO WHILE LOOP BEGINS
		do
		{
			display_title();
			menu_choice = main_menu();
			srand (time (NULL));
			system ("cls");
		} while ((menu_choice < 1) || (menu_choice > 3));

		if (menu_choice == 1) // DISPLAY RULES
		{
			display_rules ();
			system ("pause");
		}

		if (menu_choice == 2) // PLAY
		{
			do
			{
				display_title();
				initial_balance = get_bank_balance ();
				balance = initial_balance;
				draw_divider();
				printf (" Bank Balance: $%10.2lf \n", balance);

					do // SEBSEQUENT ROUND AFTER THE FIRST ROUND DO WHILE LOOP
					{
					if (balance == 0)
					{
						break;
					}
					current_round ++;
					draw_divider();
					display_round_number (current_round);
					chatter_messages (current_round, first_roll_result, second_roll_result, initial_balance, balance);

					wager = get_wager_amount ();

					answer = check_wager_amount (wager, balance);

					while (answer == NO)
					{
						draw_divider();
						printf (" Insufficient funds to make wager! Wager a smaller amount: \n");
						wager = get_wager_amount ();
						answer = check_wager_amount (wager, balance);
					}
								
					if (answer == QUIT)
					{
						menu_choice = QUIT;
						draw_divider();
						printf (" Out of funds, thanks for playing! \n");
						display_credits();
						menu_choice == 3;
						break;
					}

					else // if wager amount is enough and not zero
					{
						draw_divider();
						printf (" Your bet: $%10.2lf \n", wager);

						die1_value = roll_die ();
						draw_divider();
						printf (" Die 1 value: %d \n", die1_value);
						die2_value = roll_die ();
						printf (" Die 2 value: %d \n", die2_value);
						sum_dice = calculate_sum_dice (die1_value, die2_value);
						printf(" Roll sum: %d \n", sum_dice);
						draw_divider();
						system ("pause");

						first_roll_result = is_win_loss_or_point (sum_dice);
						switch (first_roll_result)
						{
							case YES:
							{
								draw_divider();
								printf (" You win! You won %10.2lf \n", wager * 2);

								add_or_subtract = 1;
								balance = adjust_balance (balance, wager, add_or_subtract);
								draw_divider();
								system ("pause");
								draw_divider();
								printf (" Your current balance is: %10.2lf \n", balance);
								menu_choice = 2;
								break;
							}
							case CRAPS:
							{
								point = sum_dice;
								draw_divider();
								printf (" Craps! Your point is %d \n", point);
								// second roll
								die1_value = roll_die ();
								draw_divider();
								printf (" Die 1 value: %d \n", die1_value);
								die2_value = roll_die ();
								printf (" Die 2 value: %d \n", die2_value);
								sum_dice = calculate_sum_dice (die1_value, die2_value);
								printf(" Roll sum: %d \n", sum_dice);
								draw_divider();
								system ("pause");

								second_roll_result = is_point_loss_or_neither (sum_dice, point);
								if (second_roll_result == CRAPS)
								{
									do
									{ 
										die1_value = roll_die ();
										draw_divider();
										printf (" Die 1 value: %d \n", die1_value);
										die2_value = roll_die ();
										printf (" Die 2 value: %d \n", die2_value);
										sum_dice = calculate_sum_dice (die1_value, die2_value);
										printf(" Roll sum: %d \n", sum_dice);
										draw_divider();
										system ("pause");

										second_roll_result = is_point_loss_or_neither (sum_dice, point);
									} while (second_roll_result == CRAPS);
								}
								if (second_roll_result == YES) // ROLL POINT, WIN
								{
									draw_divider();
									printf (" You win! You won %10.2lf \n", wager * 2);
									add_or_subtract = 1;
									balance = adjust_balance (balance, wager, add_or_subtract);
									draw_divider();
									printf (" Your current balance is: %10.2lf \n", balance);	
									break;
								}
								else if (second_roll_result == NO) // ROLLS 7, LOSE
								{
									first_roll_result = NO;						
								}
							} // case craps
							case NO:
							{
								draw_divider();
								printf (" You lose. \n");
								add_or_subtract = 0;
								balance = adjust_balance (balance, wager, add_or_subtract);
								draw_divider();
								printf (" Your current balance is: %10.2lf \n", balance);
								break;
							}

						}	// switch FIRST ROLL RESULT
					}	// else WAGER AMOUNT > 0
					} while (menu_choice == 2); // SEBSEQUENT ROUND AFTER THE FIRST ROUND DO WHILE LOOP
				break;
			} while (menu_choice == 2); // PLAY DO WHILE
		draw_divider();
		printf (" You lose. \n");
		display_credits ();
		} // IF MENU CHOICE == 2 AKA PLAY
	} while (menu_choice == 1); // MAIN DO WHILE LOOP ENDS




_getch();
return 0;
}