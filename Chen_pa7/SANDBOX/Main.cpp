#include "Header.h"

int main (void)
{
	char *single_digit_numbers[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
	int pos_neg_single_digit_numbers[19] = {-9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char progress[50] = {'\0'}, initials[3] = {'\0'};
	char input_filename[10] = {'\0'}, output_filename[10] = {'\0'};
	int score = 0;
	int menu_choice, menu_choice_2, index = 0, quit = 0;
	FILE *input = NULL, *output = NULL;

	srand ((unsigned int) time (NULL));


	do
	{
		display_player_info (initials, &score);
		menu(&menu_choice);
		switch (menu_choice)
		{
			case 1:	// learn about how to use the program
				program_instructions();
				printf("\n");
				system("pause");
				system("cls");
				break;
			case 2:	// initials
				signin_ascii();
				printf("Enter your initials (up to 3 letters) without spaces: ");
				scanf("%s", &initials);
				printf("\n");
				system("pause");
				system("cls");
				break;
			case 3:	// select difficulty
				display_player_info (initials, &score);
				menu_2(&menu_choice_2);
				break;
			case 4: // start new set of problems
				switch(menu_choice_2)
				{
					case EASY:
						generate_easy_problem (single_digit_numbers, &score);
						break;
					case FAIR:
						generate_fair_problem (single_digit_numbers, &score);
						break;
					case INTERMEDIATE:
						generate_intermediate_problem (single_digit_numbers, &score);
						break;
					case HARD:
						generate_hard_problem (pos_neg_single_digit_numbers, &score);
						break;
					case IMPOSSIBLE:
						generate_impossible_problem (pos_neg_single_digit_numbers, &score);
						break;
					default:
						printf("Please select a difficulty before starting a new set of problems\n\n");
						system("pause");
						system("cls");
						break;
				}
				break;
			case 5: // save & exit
				if (initials[0] == '\0')
				{
					printf("You must input your initials to save your progress\n\n");
					system("pause");
					system("cls");
				}
				else
				{
					strcat(output_filename, initials);	// so initials won't print as EC.txt
					strcat(output_filename, ".txt");
					output = fopen(output_filename, "w");
					fprintf(output, "%d       %s", score, initials);
					printf("Progress successfully saved\n\n");
					printf("You can load your progress in the future using the initials you entered\n\n");
					system("pause");
					system("cls");
					quit = YES;
				}
				break;
			case 6: // load previous progress
				if (initials[0] == '\0')
				{
					printf("Enter your initials (up to 3 letters) with no spaces in between: ");
					scanf("%s", &input_filename);				// set it to the input_filename for saving progress
					strcat(initials, input_filename);
					strcat(input_filename, ".txt");
					input = fopen(input_filename, "r");
					system("cls");
					if (fgets(progress, 5, input) != NULL)
					{
						score = atoi(progress);
						printf("Welcome back, %s!\n\n", initials);
						printf("Your progress has been restored. Current score: %d\n\n", score);
						system("pause");
						system("cls");
					}
					else
					{
						printf("Error loading progress, please try again\n\n");
						system("pause");
						system("cls");
					}
				}
				else
				{
					printf("You cannot load previous progress when signed in\n\n");
					printf("Save and quit first from the main menu first\n\n");
					system("pause");
					system("cls");
				}
				break;
			default: 
				printf("invalid input.\n");
				system("pause");
				system("cls");
				break;
		}
	} while (quit != YES);

	fclose(output);


	return 0;
}