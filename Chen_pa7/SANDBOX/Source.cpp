 /************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: 7												        	*
* Date: April 23, 2014																*
* Description: Mathematical Program										   			*
************************************************************************************/

#include "Header.h"

void display_player_info (char initials[], int *score)
{
	printf("Name: %s\n", initials);                
	printf("Score: %d\n\n", *score);
}

void menu (int *menu_choice)
{
	printf("MM       MM EEEEEEE NN     NN UU     UU \n");
	printf("MMM     MMM EE      NNN    NN UU     UU \n");
	printf("MM M   M MM EEEEE   NN  N  NN UU     UU \n");
	printf("MM  MMM  MM EE      NN    NNN UU     UU \n");
	printf("MM   M   MM EEEEEEE NN     NN  UUUUUUU  \n\n\n");

	printf("Please select from the following menu:\n\n");
	printf("1. Information on how to use this program (PLEASE READ BEFORE USING)\n");
	printf("2. Enter your initials\n");
	printf("3. Select difficulty\n");
	printf("4. Start a new set of problems\n");
	printf("5. Save and quit\n");
	printf("6. Load previous progress\n\n");
	scanf("%d", menu_choice);
	system("cls");
}

void signin_ascii (void)
{
	printf(" SSSSSS   IIIIIIII   GGGGGGG    NN     NN      IIIIIIII   NN     NN \n");
	printf("SS     S     II     GG     GG   NNN    NN         II      NNN    NN \n");
	printf("  SSS        II     GG          NN  N  NN         II      NN  N  NN \n");
	printf("S     SS     II     GG   GGGGG  NN    NNN         II      NN    NNN \n");
	printf(" SSSSSS   IIIIIIII   GGGGGG GG  NN     NN      IIIIIIII   NN     NN \n\n\n");
}

void program_instructions (void)
{
	printf("IIIIIIII NNN    NN FFFFFFFF OOOOOOOO  \n");
	printf("   II    NN N   NN FF       OO    OO  \n");
	printf("   II    NN  N  NN FFFFFF   OO    OO  \n");
	printf("   II    NN   N NN FF       OO    OO  \n");
	printf("IIIIIIII NN    NNN FF       OOOOOOOO  \n\n\n");

	printf("---------------------------------- HOW TO USE ----------------------------------\n\n");
	printf("               Enter your initials so you can save your progress...             \n");
	printf("                  Select a difficulty you're comfortable with...                \n");
	printf("                          Start a new set of probelms...                        \n");
	printf("                           Save and quit if you wish...                         \n\n");
	printf("--------------------------------------------------------------------------------\n\n\n");

	printf("----------------------------------- WARNING ------------------------------------\n");
	printf("                      TO AVOID OVERWRITING SAVED PROGRESS,                      \n");
	printf(" DO NOT SAVE USING THE SAME INITIALS BEFORE RELOADING PREVIOUSLY SAVED PROGRESS \n");
	printf("  Be sure you load previous progress each time if you wish to record progress.  \n");
	printf("--------------------------------------------------------------------------------\n\n\n");

	printf("------------------------------------ SCORING -----------------------------------\n\n");
	printf("EASY questions          2 points for every correct answer                       \n");
	printf("                        1 point off for every incorrect answer                  \n\n");

	printf("FAIR questions          4 points for every correct answer                       \n");
	printf("                        2 point off for every incorrect answer                  \n\n");

	printf("INTERMEDIATE questions  6 points for every correct answer                       \n");
	printf("                        3 points off for every incorrect answer                 \n");

	printf("NOTE: Answers to division problems should be inputted in the following way:     \n");
	printf("                        3 / 5 =                                                 \n");
	printf("                        A: 0 (answer w/o remainder)                             \n");
	printf("                        R: 3 (remainder)                                        \n\n");

	printf("HARD questions          8 points for every correct answer                       \n");
	printf("                        4 points off for every incorrect answer                 \n\n");

	printf("IMPOSSIBLE questions    10 points for every correct answer                      \n");
	printf("                        5 points off for every incorrect answer                 \n\n");
	printf("--------------------------------------------------------------------------------\n\n\n");
}

void menu_2 (int *menu_choice_2)
{
	do
	{
		printf("MM       MM EEEEEEE NN     NN UU     UU \n");
		printf("MMM     MMM EE      NNN    NN UU     UU \n");
		printf("MM M   M MM EEEEE   NN  N  NN UU     UU \n");
		printf("MM  MMM  MM EE      NN    NNN UU     UU \n");
		printf("MM   M   MM EEEEEEE NN     NN  UUUUUUU  \n\n\n");	

		printf("Select the difficulty: \n\n");

		printf("1: Easy - Addition and Subtraction\n");
		printf("2. Fair - Multiplication\n");
		printf("3. Intermediate - Division\n");
		printf("4. Hard - Mixed\n");
		printf("5. Impossible - Mixed\n\n");
		scanf("%d", menu_choice_2);
	} while ((*menu_choice_2 < 1) && (*menu_choice_2 > 5));
	system("cls");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void generate_easy_problem (char *single_digit_numbers[], int *score)
{

	char output [100] = {'\0'};	// it looks for null, and now null is in the beginning
	int clear = 0, problem = 0, index = 0, values = 0, num_of_terms = 0, add_or_subtract = 0, answer = 0, user_answer = 0;

	printf("Problem Set Difficulty: Easy\n\n");

	for (problem = 0; problem < 10; problem++)	// amount of problems
	{
		printf("Problem %d/10:  ", problem+1);
		num_of_terms = (rand()%2)+2;	// 2-3

		for (values = 0; values < num_of_terms; values++)	// amount of terms
		{
			index = (rand()%9); 	// 0-9

			if (index != 0)		// rand%9 returns 0-9, the string only has 0-8 so we subtract 1 unless it's 0
			{
				index--;
			}

			if (values == 0)
			{
				strcat(output, single_digit_numbers[index]);			// value of that index is added to output
			}

			else if (values > 0)
			{
				add_or_subtract = (rand()%2);
				if (add_or_subtract == ADD)
				{
					strcat(output, " + ");
				}
				if (add_or_subtract == SUBTRACT)
				{
					strcat(output, " - ");
				}
				strcat(output, single_digit_numbers[index]);
			}
		}
		printf("%s = ", output);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// check the answer
		if (num_of_terms == 2) 
		{
			if (output[2] == '+') 
			{
				answer = (output[0]-48) + (output[4]-48);
			}
			else if (output[2] == '-') 
			{
				answer = (output[0]-48) - (output[4]-48);
			}
		}


		else if (num_of_terms == 3) 
		{
			if (output[2] == '+')	// 1 + 2 ? 3 	
			{
				if (output[6] == '+')	// 1 + 2 + 3
				{
					answer = (output[0]-48) + (output[4]-48) + (output[8]-48);
				}
				else if (output[6] == '-')	// 1 + 2 - 3
				{
					answer = (output[0]-48) + (output[4]-48) - (output[8]-48);
				}
			}
			else if (output[2] == '-')	// 1 - 2 ? 3
			{
				if (output[6] == '+')	// 1 - 2 + 3
				{
					answer = (output[0]-48) - (output[4]-48) + (output[8]-48);
				}
				else if (output[6] == '-')	// 1 - 2 - 3
				{
					answer = (output[0]-48) - (output[4]-48) - (output[8]-48);
				}
			}
		}

		scanf("%d", &user_answer);
		if (user_answer == answer)
		{
			*score += 2; 
			printf("correct! + 2\n\n");
		}
		else
		{
			*score -= 1;
			printf("incorrect. - 1\n\n");
		}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// clear cells
		for (clear = 0; clear < 100; clear++)
		{
			output[clear] = '\0';
		}
	}
	system("cls");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void generate_fair_problem (char *single_digit_numbers[], int *score)
{

	char output [100] = {'\0'};
	int clear = 0, problem = 0, index = 0, values = 0, answer = 0, user_answer = 0;

	printf("Problem Set Difficulty: Fair\n\n");

	for (problem = 0; problem < 10; problem++)	// amount of problems
	{
		printf("Problem %d/10:  ", problem+1);

		for (values = 0; values < 2; values++)	// amount of terms
		{
			index = (rand()%9); 	// 0-9

			if (index != 0)		// rand%9 returns 0-9, the string only has 0-8 so we subtract 1 unless it's 0
			{
				index--;
			}

			if (values == 0)
			{
				strcat(output, single_digit_numbers[index]);	// value of that index is added to output
			}

			else if (values > 0)
			{
				strcat(output, " x ");
				strcat(output, single_digit_numbers[index]);
			}
		}
		printf("%s = ", output);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// check the answer

		answer = (output[0]-48) * (output[4]-48);

		scanf("%d", &user_answer);
		if (user_answer == answer)
		{
			*score += 4; 
			printf("correct! + 4\n\n");
		}
		else
		{
			*score -= 2;
			printf("incorrect. - 2\n\n");
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// clear cells
		for (clear = 0; clear < 100; clear++)
		{
			output[clear] = '\0';
		}
	}
	system("cls");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void generate_intermediate_problem (char *single_digit_numbers[], int *score)
{

	char output [100] = {'\0'};
	int clear = 0, problem = 0, index = 0, values = 0, answer = 0, user_answer = 0, user_remainder = 0, remainder = 0;

	printf("Problem Set Difficulty: Intermediate\n\n");

	for (problem = 0; problem < 10; problem++)	// amount of problems
	{
		printf("Problem %d/10:  ", problem+1);

		for (values = 0; values < 2; values++)	// amount of terms
		{
			index = (rand()%9); 	// 0-9

			if (index != 0)		// rand%9 returns 0-9, the string only has 0-8 so we subtract 1 unless it's 0
			{
				index--;
			}

			if (values == 0)
			{
				strcat(output, single_digit_numbers[index]);	// value of that index is added to output
			}

			else if (values > 0)
			{
				strcat(output, " / ");
				strcat(output, single_digit_numbers[index]);
			}
		}
		printf("%s = ", output);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// check the answer

		answer = (output[0]-48)/(output[4]-48);
		remainder = (output[0]-48)%(output[4]-48);

		printf("\nA: ");
		scanf("%d", &user_answer);
		printf("R: ");
		scanf("%d", &user_remainder);

		if ((user_answer == answer) && (user_remainder == remainder))
		{
			*score += 6; 
			printf("correct! + 6\n\n");
		}
		else
		{
			*score -= 3;
			printf("incorrect. - 3\n\n");
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// clear cells
		for (clear = 0; clear < 100; clear++)
		{
			output[clear] = '\0';
		}
	}
	system("cls");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void generate_hard_problem (int pos_neg_single_digit_numbers[], int *score)
{

	char output [20] = {'\0'};
	char *display[19] = {"-9", "-8", "-7", "-6", "-5", "-4", "-3", "-2", "-1", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	int clear = 0, problem = 0, index = 0, values = 0, answer = 0, user_answer = 0, user_remainder = 0, remainder = 0, 
	type_of_question = 0, num_of_terms = 0, value_1 = 0, value_2 = 0, value_3 = 0, operand_1 = 0, operand_2 = 0, new_numerator = 0, 
	new_denominator = 0;

	printf("Problem Set Difficulty: Hard\n\n");
	printf("Note:	\n");
	printf("1 / 2 / 3 = 1 / 6 \n");
	printf("A: 0 \n");
	printf("R: 1 \n\n");

	for (problem = 0; problem < 10; problem++)	// amount of problems
	{
		printf("Problem %d/10:  ", problem+1);
		num_of_terms = (rand()%2)+2;	// 2-3

		for (values = 0; values < num_of_terms; values++)	// amount of terms
		{
			index = (rand()%19); 	// 0-19

			if (index != 0)		// rand%9 returns 0-9, the string only has 0-8 so we subtract 1 unless it's 0
			{
				index--;
			}

			if (values == 0)
			{
				strcat(output, display[index]);			// value of that index is added to output
				value_1 = (pos_neg_single_digit_numbers[index]);
			}

			else if (values == 1)
			{
				type_of_question = (rand()%4);
				if (type_of_question == ADD)
				{
					strcat(output, " + ");
				}
				if (type_of_question == SUBTRACT)
				{
					strcat(output, " - ");
				}
				if (type_of_question == MULTIPLY)
				{
					strcat(output, " x ");
				}
				if (type_of_question == DIVIDE)
				{
					strcat(output, " / ");
				}
				strcat(output, display[index]);
				value_2 = pos_neg_single_digit_numbers[index];
			}

			else if (values == 2)
			{
				type_of_question = (rand()%4);
				if (type_of_question == ADD)
				{
					strcat(output, " + ");
				}
				if (type_of_question == SUBTRACT)
				{
					strcat(output, " - ");
				}
				if (type_of_question == MULTIPLY)
				{
					strcat(output, " x ");
				}
				if (type_of_question == DIVIDE)
				{
					strcat(output, " / ");
				}
				strcat(output, display[index]);
				value_3 = pos_neg_single_digit_numbers[index];
			}
		}
		printf("%s = ", output);
		
///////////////////////////////////////////////////
		if (num_of_terms == 2)
		{
			if (value_1 < 0)	// checks for 2 value problems, finds operand
			{
				operand_1 = 3;
			}
			if (value_1 >= 0)
			{
				operand_1 = 2;
			}

			if (output[operand_1] == '+')
			{
				answer = value_1 + value_2;
			}
			else if (output[operand_1] == '-')
			{
				answer = value_1 - value_2;
			}
			else if (output[operand_1] == 'x')
			{
				answer = value_1 * value_2;
			}
			else if (output[operand_1] == '/')
			{
				answer = value_1 / value_2;
				remainder = value_1 % value_2;
			}
		}
///////////////////////////////////////////////////
		else
		{
			if (value_1 < 0)	// -A
			{
				operand_1 = 3;

				if (value_2 < 0)	// -A _ -B _
				{
					operand_2 = 8;
				}
				else if (value_2 >= 0)	// -A _ B _
				{
					operand_2 = 7;
				}
			}
			if (value_1 >= 0)	// A
			{
				operand_1 = 2;

				if (value_2 < 0)	// A _ -B _
				{
					operand_2 = 7;
				}
				else if (value_2 >= 0)	// A _ B _
				{
					operand_2 = 6;
				}
			}
////CHECK +
			if ((output[operand_1] == '+') && (output[operand_2] == '+'))
			{
				answer = value_1 + value_2 + value_3;
			}
			else if ((output[operand_1] == '+') && (output[operand_2] == '-'))
			{
				answer = value_1 + value_2 - value_3;
			}
			else if ((output[operand_1] == '+') && (output[operand_2] == 'x'))
			{
				answer = value_1 + (value_2 * value_3);
			}
			else if ((output[operand_1] == '+') && (output[operand_2] == '/'))
			{
				new_numerator = value_1 * value_3;
				new_numerator = new_numerator + value_2;
				answer = new_numerator / value_3;
				remainder = new_numerator % value_3;
			}
////CHECK -
			else if ((output[operand_1] == '-') && (output[operand_2] == '+'))
			{
				answer = value_1 - value_2 + value_3;
			}
			else if ((output[operand_1] == '-') && (output[operand_2] == '-'))
			{
				answer = value_1 - value_2 - value_3;
			}
			else if ((output[operand_1] == '-') && (output[operand_2] == 'x'))
			{
				answer = value_1 - (value_2 * value_3);
			}
			else if ((output[operand_1] == '-') && (output[operand_2] == '/'))
			{
				new_numerator = value_1 * value_3;
				new_numerator = new_numerator - value_2;
				answer = new_numerator / value_3;
				remainder = new_numerator % value_3;
			}
////CHECK *
			else if ((output[operand_1] == 'x') && (output[operand_2] == '+'))
			{
				answer = (value_1 * value_2) + value_3;
			}
			else if ((output[operand_1] == 'x') && (output[operand_2] == '-'))
			{
				answer = (value_1 * value_2) - value_3;
			}
			else if ((output[operand_1] == 'x') && (output[operand_2] == 'x'))
			{
				answer = value_1 * value_2 * value_3;
			}
			else if ((output[operand_1] == 'x') && (output[operand_2] == '/'))
			{
				new_numerator = value_1 * value_2;
				answer = new_numerator / value_3;
				remainder = new_numerator % value_3;
			}
//// CHECK /
			else if ((output[operand_1] == '/') && (output[operand_2] == '+'))
			{
				answer = (value_1 * value_2) + value_3;
			}
			else if ((output[operand_1] == '/') && (output[operand_2] == '-'))
			{
				answer = (value_1 * value_2) - value_3;
			}
			else if ((output[operand_1] == '/') && (output[operand_2] == 'x'))
			{
				answer = (value_1 / value_2) * value_3;
			}
			else if ((output[operand_1] == '/') && (output[operand_2] == '/'))
			{
				new_denominator = value_2 * value_3;
				answer = value_1 / new_denominator;
				remainder = value_1 % new_denominator;
			}
		}
///////////////////////////////////////////////////

		printf("\nA: ");
		scanf("%d", &user_answer);
		printf("R: ");
		scanf("%d", &user_remainder);

		if ((user_answer == answer) && (user_remainder == remainder))
		{
			*score += 8; 
			printf("correct! + 8\n\n");
		}
		else
		{
			*score -= 4;
			printf("incorrect. - 4\n\n");
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// clear cells
		for (clear = 0; clear < 20; clear++)
		{
			output[clear] = '\0';
		}
		operand_1 = 0;
		operand_2 = 0;
		remainder = 0;
	}
	system("cls");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void generate_impossible_problem (int pos_neg_single_digit_numbers[], int *score)
{

	char output [20] = {'\0'};
	char tmp_string[25] = {'\0'};
	int clear = 0, problem = 0, index = 0, values = 0, answer = 0, user_answer = 0, user_remainder = 0, remainder = 0, 
	type_of_question_1 = 0, type_of_question_2 = 0, type_of_question_3 = 0, num_of_terms = 0, value = 0, value_1 = 0, value_2 = 0, value_3 = 0, value_4 = 0, operand_1 = 0, operand_2 = 0, 
	new_numerator = 0, new_numerator_2 = 0, new_denominator = 0, rand_ception = 0;

	printf("Problem Set Difficulty: Impossible\n\n");

	for (problem = 0; problem < 10; problem++)
	{
		printf("Problem %d/10:  ", problem+1);
		num_of_terms = (rand()%3)+2;	// 2-4

		for (values = 0; values < num_of_terms; values++)	// amount of terms
		{
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// generate values
			if (values == 0)
			{
				rand_ception = rand()%2;
				index = 0;

				if (rand_ception == 0)
				{
					value_1 = ((rand()%900)-900);
					_itoa(value_1, tmp_string, 10);	// converts int to string
					strcat(output, tmp_string);
				}
				else if (rand_ception ==1 )
				{
					value_1 = ((rand()%900)+99);
					_itoa(value_1, tmp_string, 10);
					strcat(output, tmp_string);
				}
			}

			else if (values == 1)
			{
				type_of_question_1 = (rand()%4);
				if (type_of_question_1 == ADD)
				{
					strcat(output, " + ");
				}
				if (type_of_question_1 == SUBTRACT)
				{
					strcat(output, " - ");
				}
				if (type_of_question_1 == MULTIPLY)
				{
					strcat(output, " x ");
				}
				if (type_of_question_1 == DIVIDE)
				{
					strcat(output, " / ");
				}

				rand_ception = rand()%2;

				if (rand_ception == 0)
				{
					value_2 = ((rand()%900)-900);
					_itoa(value_2, tmp_string, 10);
					strcat(output, tmp_string);
				}
				else if (rand_ception == 1)
				{
					value_2 = ((rand()%900)+99);
					_itoa(value_2, tmp_string, 10);
					strcat(output, tmp_string);
				}

			}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
			else if (values == 2)
			{
				type_of_question_2 = (rand()%4);
				if (type_of_question_2 == ADD)
				{
					strcat(output, " + ");
				}
				if (type_of_question_2 == SUBTRACT)
				{
					strcat(output, " - ");
				}
				if (type_of_question_2 == MULTIPLY)
				{
					strcat(output, " x ");
				}
				if (type_of_question_2 == DIVIDE)
				{
					strcat(output, " / ");
				}
				
				rand_ception = rand()%2;

				if (rand_ception == 0)
				{
					value_3 = (rand()%900)-900;
					_itoa(value_3, tmp_string, 10);
					strcat(output, tmp_string);
				}
				else if (rand_ception ==1)
				{
					value_3 = (rand()%900)+99;
					_itoa(value_3, tmp_string, 10);
					strcat(output, tmp_string);
				}				

			}

			else if (values == 3)
			{
				type_of_question_3 = (rand()%4);
				if (type_of_question_3 == ADD)
				{
					strcat(output, " + ");
				}
				if (type_of_question_3 == SUBTRACT)
				{
					strcat(output, " - ");
				}
				if (type_of_question_3 == MULTIPLY)
				{
					strcat(output, " x ");
				}
				if (type_of_question_3 == DIVIDE)
				{
					strcat(output, " / ");
				}
				rand_ception = rand()%2;

				if (rand_ception == 0)
				{
					value_4 = ((rand()%900)-900);
					_itoa(value_4, tmp_string, 10);
					strcat(output, tmp_string);
				}
				else if (rand_ception ==1)
				{
					value_4 = ((rand()%900)+99);
					_itoa(value_4, tmp_string, 10);
					strcat(output, tmp_string);
				}
			}
		}
		printf("%s = \n", output);
		
///////////////////////////////////////////////////
		if (num_of_terms == 2)
		{
			if (type_of_question_1 == ADD)
			{
				answer = value_1 + value_2;
			}
			else if (type_of_question_1 == SUBTRACT)
			{
				answer = value_1 - value_2;
			}
			else if (type_of_question_1 == MULTIPLY)
			{
				answer = value_1 * value_2;
			}
			else if (type_of_question_1 == DIVIDE)
			{
				answer = value_1 / value_2;
				remainder = value_1 % value_2;
			}
		}
///////////////////////////////////////////////////
		else if (num_of_terms == 3)
		{
////CHECK +
			if ((type_of_question_1 == ADD) && (type_of_question_2 == ADD))
			{
				answer = value_1 + value_2 + value_3;
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == SUBTRACT))
			{
				answer = value_1 + value_2 - value_3;
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == MULTIPLY))
			{
				answer = value_1 + (value_2 * value_3);
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == DIVIDE))
			{
				new_numerator = value_1 * value_3;
				new_numerator = new_numerator + value_2;
				answer = new_numerator / value_3;
				remainder = new_numerator % value_3;
			}
////CHECK -
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == ADD))
			{
				answer = value_1 - value_2 + value_3;
			}
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == SUBTRACT))
			{
				answer = value_1 - value_2 - value_3;
			}
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == MULTIPLY))
			{
				answer = value_1 - (value_2 * value_3);
			}
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == DIVIDE))
			{
				new_numerator = value_1 * value_3;
				new_numerator = new_numerator - value_2;
				answer = new_numerator / value_3;
				remainder = new_numerator % value_3;
			}
////CHECK *
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == ADD))
			{
				answer = (value_1 * value_2) + value_3;
			}
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == SUBTRACT))
			{
				answer = (value_1 * value_2) - value_3;
			}
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == MULTIPLY))
			{
				answer = value_1 * value_2 * value_3;
			}
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == DIVIDE))
			{
				new_numerator = value_1 * value_2;
				answer = new_numerator / value_3;
				remainder = new_numerator % value_3;
			}
//// CHECK /
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == ADD))
			{
				answer = (value_1 * value_2) + value_3;
			}
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == SUBTRACT))
			{
				answer = (value_1 * value_2) - value_3;
			}
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == MULTIPLY))
			{
				answer = (value_1 / value_2) * value_3;
			}
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == DIVIDE))
			{
				new_denominator = value_2 * value_3;
				answer = value_1 / new_denominator;
				remainder = value_1 % new_denominator;
			}
		}
///////////////////////////////////////////////////
		else if (num_of_terms == 4)
		{
////CHECK +
			if ((type_of_question_1 == ADD) && (type_of_question_2 == ADD) && (type_of_question_3 == ADD)) 	// +++
			{
				answer = value_1 + value_2 + value_3 + value_4;
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == ADD) && (type_of_question_3 == SUBTRACT))	// ++-
			{
				answer = value_1 + value_2 + value_3 - value_4;
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == SUBTRACT) && (type_of_question_3 == SUBTRACT))	// +--
			{
				answer = value_1 + value_2 - value_3 - value_4;
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == SUBTRACT) && (type_of_question_3 == ADD))	// +-+
			{
				answer = value_1 + value_2 - value_3 + value_4;
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == ADD) && (type_of_question_3 == MULTIPLY))	// ++*
			{
				answer = value_1 + value_2 + (value_3 * value_4);
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == MULTIPLY) && (type_of_question_3 == MULTIPLY))	// +**
			{
				answer = value_1 + (value_2 * value_3 * value_4);
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == MULTIPLY) && (type_of_question_3 == ADD))	// +*+
			{
				answer = value_1 + (value_2 * value_3) + value_4;
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == ADD) && (type_of_question_3 == DIVIDE))	// ++/
			{
				new_numerator = value_1 * value_3;
				new_numerator = new_numerator * value_4;
				new_numerator = new_numerator + value_3;
				answer = new_numerator / value_4;
				remainder = new_numerator % value_4;
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == DIVIDE) && (type_of_question_3 == DIVIDE))	// +//
			{
				new_denominator = value_3 * value_4;
				new_numerator = value_1 * new_denominator;
				new_numerator = new_numerator + value_2;
				answer = new_numerator / new_denominator;
				remainder = new_numerator % new_denominator;
			}
			else if ((type_of_question_1 == ADD) && (type_of_question_2 == DIVIDE) && (type_of_question_3 == ADD))	// +/+
			{
				new_numerator = value_1 * value_3;
				new_numerator_2 = value_4 * value_3;
				new_numerator = new_numerator + value_2 + new_numerator_2;
				answer = new_numerator / value_3;
				remainder = new_numerator % value_3;
			}
////CHECK -
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == SUBTRACT) && (type_of_question_3 ==  SUBTRACT))	// ---
			{
				answer = value_1 - value_2 - value_3 - value_4;
			}
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == SUBTRACT) && (type_of_question_3 == ADD))	// --+
			{
				answer = value_1 - value_2 - value_3 + value_4;
			}
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == ADD) && (type_of_question_3 == ADD))	// -++
			{
				answer = value_1 - value_2 + value_3 + value_4;
			}
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == ADD) && (type_of_question_3 == SUBTRACT))	// -+-
			{
				answer = value_1 - value_2 + value_3 - value_4;
			}

			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == SUBTRACT) && (type_of_question_3 == MULTIPLY)) // --*
			{
				answer = value_1 - value_2 - (value_3 * value_4);
			}
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == MULTIPLY) && (type_of_question_3 == MULTIPLY)) // -**
			{
				answer = value_1 - (value_2 * value_3 * value_4);
			}
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == MULTIPLY) && (type_of_question_3 == SUBTRACT)) // -*-
			{
				answer = value_1 - (value_2 * value_3) - value_4;
			}

			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == SUBTRACT) && (type_of_question_3 == DIVIDE))	// --/
			{
				new_numerator = value_1 - value_3;
				new_numerator = new_numerator * value_4;
				new_numerator = new_numerator - value_3;
				answer = new_numerator / value_4;
				remainder = new_numerator % value_4;
			}
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == DIVIDE) && (type_of_question_3 == DIVIDE))	// -//
			{
				new_denominator = value_3 * value_4;
				new_numerator = value_1 * new_denominator;
				new_numerator = new_numerator - value_2;
				answer = new_numerator / new_denominator;
				remainder = new_numerator % new_denominator;
			}
			else if ((type_of_question_1 == SUBTRACT) && (type_of_question_2 == DIVIDE) && (type_of_question_3 == SUBTRACT))	// -/-
			{
				new_numerator = value_1 * value_3;
				new_numerator_2 = value_4 * value_3;
				new_numerator = new_numerator - value_2 - new_numerator_2;
				answer = new_numerator / value_3;
				remainder = new_numerator % value_3;
			}
////CHECK *
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == MULTIPLY) && (type_of_question_3 == MULTIPLY))	// ***
			{
				answer = value_1 * value_2 * value_3 * value_4;
			}
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == MULTIPLY) && (type_of_question_3 == ADD))	// **+
			{
				answer = (value_1 * value_2 * value_3) + value_4;
			}
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == ADD) && (type_of_question_3 == ADD))	// *++
			{
				answer = (value_1 * value_2) + value_3 +  value_4;
			}
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == ADD) && (type_of_question_3 == MULTIPLY))	// *+*
			{
				answer = (value_1 * value_2) + (value_3 * value_4);
			}

			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == MULTIPLY) && (type_of_question_3 == SUBTRACT))	// **-
			{
				answer = (value_1 * value_2 * value_3) - value_4;
			}
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == SUBTRACT) && (type_of_question_3 == SUBTRACT))	// *--
			{
				answer = (value_1 * value_2) - value_3 -  value_4;
			}
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == SUBTRACT) && (type_of_question_3 == MULTIPLY))	// *-*
			{
				answer = (value_1 * value_2) - (value_3 - value_4);
			}

			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == MULTIPLY) && (type_of_question_3 == DIVIDE))	// **/
			{
				answer = (value_1 * value_2 * value_3) / value_4;
				remainder = (value_1 * value_2 * value_3) % value_4;
			}
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == MULTIPLY) && (type_of_question_3 == DIVIDE))	// *//
			{
				answer = value_1 * value_2 / value_3 / value_4;
			}
			else if ((type_of_question_1 == MULTIPLY) && (type_of_question_2 == DIVIDE) && (type_of_question_3 == MULTIPLY))	// */*
			{
				new_numerator = value_1 * value_2 * value_4;
				answer = new_numerator / value_3;
				remainder = new_numerator % value_3;
			}
//// CHECK /
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == DIVIDE) && (type_of_question_3 == DIVIDE))	// ///
			{
				new_numerator = value_1 * value_4;
				new_numerator_2 = value_2 * value_3;
				answer = new_numerator / new_numerator_2;
				remainder = new_numerator / new_numerator_2;
			}
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == DIVIDE) && (type_of_question_3 == ADD))	// //+
			{
				new_denominator = value_2 * value_3;
				new_numerator = value_4 * new_denominator;
				new_numerator = value_1 + new_numerator;
				answer = new_numerator / new_denominator;
				remainder = new_numerator % new_denominator;
			}
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == ADD) && (type_of_question_3 == ADD))	// /++
			{
				new_numerator = value_3 * value_2;
				new_numerator_2 = value_4 * value_2;
				new_numerator = value_1 + new_numerator + new_numerator_2;
				answer = new_numerator / value_2;
				remainder = new_numerator % value_2;
			}
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == ADD) && (type_of_question_3 == DIVIDE))	// /+/
			{
				new_numerator = value_1 * value_4;
				new_numerator_2 = value_2 * value_3;
				new_numerator = new_numerator + new_numerator_2;
				answer = new_numerator / new_denominator;
				remainder = new_numerator % new_denominator;
			}

			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == DIVIDE) && (type_of_question_3 == SUBTRACT))	// //-
			{
				new_denominator = value_2 * value_3;
				new_numerator = value_4 * new_denominator;
				new_numerator = value_1 - new_numerator;
				answer = new_numerator / new_denominator;
				answer = new_numerator % new_denominator;
			}
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == SUBTRACT) && (type_of_question_3 == SUBTRACT))	// /--
			{
				new_numerator = value_3 * value_2;
				new_numerator_2 = value_4 * value_2;
				new_numerator = value_1 - new_numerator - new_numerator_2;
				answer = new_numerator / value_2;
				remainder = new_numerator % value_2;
			}
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == SUBTRACT) && (type_of_question_3 == DIVIDE))	// /-/
			{
				new_numerator = value_1 * value_4;
				new_numerator_2 = value_2 * value_3;
				new_numerator = new_numerator - new_numerator_2;
				answer = new_numerator / new_denominator;
				remainder = new_numerator % new_denominator;
			}

			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == DIVIDE) && (type_of_question_3 == MULTIPLY))	// //*
			{
				new_denominator = value_2 * value_3;
				new_numerator = value_4 * new_denominator;
				new_numerator = new_numerator * value_1;
				answer = new_numerator / new_denominator;
				remainder = new_numerator % new_denominator;
			}
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == MULTIPLY) && (type_of_question_3 == MULTIPLY))	// /**
			{
				new_numerator = value_1 * value_3 * value_4;
				answer = new_numerator / value_2;
				remainder = new_numerator % value_2;
			}
			else if ((type_of_question_1 == DIVIDE) && (type_of_question_2 == MULTIPLY) && (type_of_question_3 == DIVIDE))	// /*/
			{
				new_numerator = value_1 * value_3;
				new_denominator = value_2 *value_4;
				answer = new_numerator / new_denominator;
				remainder = new_numerator % new_denominator;
			}
		}
///////////////////////////////////////////////////

		printf("A: ");
		scanf("%d", &user_answer);
		printf("R: ");
		scanf("%d", &user_remainder);

		if ((user_answer == answer) && (user_remainder == remainder))
		{
			*score += 10; 
			printf("correct! + 10\n\n");
		}
		else
		{
			*score -= 5;
			printf("incorrect. - 5\n\n");
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// clear cells
		for (clear = 0; clear < 20; clear++)
		{
			output[clear] = '\0';
		}
		operand_1 = 0;
		operand_2 = 0;
		remainder = 0;
		new_denominator = 0;
		new_numerator = 0;
		new_numerator_2 = 0;
	}
	system("cls");
}