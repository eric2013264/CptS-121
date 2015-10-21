 /************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: Bonus Assignment											*
* Date: May 1, 2014															     	*
* Description: Morse Code Converter													*
************************************************************************************/

#include "Header.h"

void Morse_code(char morse_strings[91][6])
{
	// A - Z
	strcpy (morse_strings['A'], ".-");
	strcpy (morse_strings['B'], "-...");
	strcpy (morse_strings['C'], "-.-."); 
	strcpy (morse_strings['D'], "-.."); 
	strcpy (morse_strings['E'], "."); 
	strcpy (morse_strings['F'], "..-.");
	strcpy (morse_strings['G'], "--.");
	strcpy (morse_strings['H'], "...."); 
	strcpy (morse_strings['I'], ".."); 
	strcpy (morse_strings['J'], ".---"); 
	strcpy (morse_strings['K'], "-.-");
	strcpy (morse_strings['L'], ".-..");
	strcpy (morse_strings['M'], "--"); 
	strcpy (morse_strings['N'], "-."); 
	strcpy (morse_strings['O'], "---"); 
	strcpy (morse_strings['P'], ".--.");
	strcpy (morse_strings['Q'], "--.-");
	strcpy (morse_strings['R'], ".-."); 
	strcpy (morse_strings['S'], "..."); 
	strcpy (morse_strings['T'], "-");  
	strcpy (morse_strings['U'], "..-");
	strcpy (morse_strings['V'], "...-");
	strcpy (morse_strings['W'], ".--"); 
	strcpy (morse_strings['X'], "-..-"); 
	strcpy (morse_strings['Y'], "-.--");
	strcpy (morse_strings['Z'], "--..");

	// 0 - 9
	strcpy (morse_strings['1'], ".----");
	strcpy (morse_strings['2'], "..---");
	strcpy (morse_strings['3'], "...--");
	strcpy (morse_strings['4'], "....-");
	strcpy (morse_strings['5'], ".....");
	strcpy (morse_strings['6'], "-....");
	strcpy (morse_strings['7'], "--...");
	strcpy (morse_strings['8'], "---..");
	strcpy (morse_strings['9'], "----.");
	strcpy (morse_strings['0'], "-----");
}

int English_to_morse(FILE *infile, FILE *outfile, char morse_strings[91][6])
{
	int num_of_chars = 0, status = 0, new_line = 1;
	char input = 0;

	while (status != EOF)
	{
		status = fscanf(infile, "%c", &input);
		if (status != EOF)
		{
			num_of_chars++;
			if ((input != ' ') && (input != 10))
			{
				if(islower(input))
				{
					input = toupper(input);	// converts to uppercase
				}
				if (new_line == 0)
				{
					fprintf(outfile, "%c", ' ');
				}
				fprintf(outfile, "%s", morse_strings[input]);				
				new_line = 0;
			}			
			else
			{
				fprintf(outfile, "%c", input);
				if (input == 10)
				{
					new_line = 1;
				}
			}
		}
	}

	return num_of_chars;
}

int Morse_to_english(FILE * infile, FILE * outfile, char morse_strings[91][6])
{
	int num_of_chars = 0, status = 0, i = 0, search_completed = 0, previous_char_space = 0, index = 0, new_line = 1;
	char input[6];
	char character = 0;

	while (status != EOF)
	{
		status = fscanf(infile, "%c", &character);
		if (status != EOF)
		{
			search_completed = 0;

			if(character != ' ' && character != 10)
			{
				input[index++] = character;
				previous_char_space = 0;
				new_line = 0;
			}			
			else if ((character == 10)||(character == ' '))
			{
				if (character == 10)
				{
					if (new_line == 1)
					{
						num_of_chars++; //one more newline
					}
					else
					{
						num_of_chars += 2; //one more new word and a newline
					}
					new_line = 1;
				}
				else
				{
					num_of_chars++;
					new_line = 0;
				}

				input[index] = 0;
				for (i = 48; i < 91 && search_completed == 0; i++) //'0' is 48, 'A' is 65
				{
					if (strcmp(morse_strings[i], input) == 0)
					{
						fprintf(outfile, "%c", i);
						search_completed = 1;
					}
				}

				if (character == 10)
				{
					fprintf(outfile, "%c", character);
				}
				else if (character == ' ' && previous_char_space == 1) //two spaces in a row
				{
					fprintf(outfile, "%c", ' ');
				}

				previous_char_space = 1;
				index = 0;
			}						
		}
		else
		{
			if (new_line == 0)
			{
				num_of_chars++;
			}

			input[index] = 0;
			for (i = 48; i < 91 && search_completed == 0; i++) //'0' is 48, 'A' is 65
			{
				if (strcmp(morse_strings[i], input) == 0)
				{
					fprintf(outfile, "%c", i);
					search_completed = 1;
				}
			}
		}
	}
	return num_of_chars;
}