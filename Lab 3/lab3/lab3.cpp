#include "lab3.h"

FILE * open_input_file(void)
{
	FILE * infile = NULL;
	infile = fopen("input.dat", "r");
	return infile;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
char read_character (FILE *infile)
{
	char character = '\0';

	fscanf (infile, "%c", &character);
	return character;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int determine_ascii_value (char character)
{
	int ascii = 0;

	ascii = (int)character;
	return ascii;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int is_line (char character)
{
	int new_line = 0;

	if(character == 10)
	{
		new_line = NEWLINE;
	}
	else
	{
		new_line = NOT_NEWLINE;
	}
	return new_line;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int number_lines (char character, int current_number_lines) 
{
	int new_line = 0;

	new_line = is_line(character);
	if (new_line == NEWLINE) // if affirmitive
	{
		current_number_lines++;
	}
	return current_number_lines;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int is_vowel (char character)
{
	int vowel = 0;

	if (character == 65	|| character == 69	|| character == 73	|| character == 79	|| 
		character == 85	|| character == 97	|| character == 101	|| character == 105	|| 
		character == 111|| character == 117)
	{
		vowel = VOWEL;
	}
	else 
	{
		vowel = NOT_VOWEL;
	}
	return vowel;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int number_vowels (char character, int current_number_vowels)
{
	int vowel = 0;

	vowel = is_vowel(character);
	if (vowel == VOWEL) // if affirmitive 
	{
		current_number_vowels++;
	}
	return current_number_vowels;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int is_digit (char character)
{
	int digit = 0;

	if (character > 47 && character < 58)
	{
		digit = DIGIT;
	}
	else
	{
		digit = NOT_DIGIT;
	}
	return digit;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int number_digits (char character, int current_number_digits)
{
	int digits = 0;

	digits = is_digit (character);
	if (digits == DIGIT) 
	{
		current_number_digits++;
	}
	return current_number_digits;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int is_alpha (char character)
{
	int alpha = 0;

	if ((character > 64 && character < 91) || (character > 96 && character < 123))
	{
		alpha = ALPHA;
	}
	else 
	{
		alpha = NOT_ALPHA;
	}
	return alpha;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int number_alphas (char character, int current_number_alphas)
{
	int alpha = 0;

	alpha = is_alpha (character);
	if (alpha == ALPHA) // if affirmitive
	{
		current_number_alphas++;
	}
	return current_number_alphas;

}
//////////////////////////////////////////////
//////////////////////////////////////////////
int is_lower (char character)
{
	int lower = 0; 

	if (character > 96 && character < 123)
	{
		lower = LOWER;
	}
	else 
	{
		lower = NOT_LOWER;
	}
	return lower;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int number_lowers (char character, int current_number_lowers)
{
	int lower = 0;

	lower = is_lower (character);
	if (lower == LOWER)
	{
		current_number_lowers++;
	}
	return current_number_lowers;

}
//////////////////////////////////////////////
//////////////////////////////////////////////
int is_upper (char character)
{
	int upper = 0;

	if (character > 64 && character < 91)
	{
		upper = UPPER;
	}
	else 
	{
		upper = NOT_UPPER;
	}
	return upper;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int number_uppers (char character, int current_number_uppers)
{
	int upper = 0;

	upper = is_upper (character);
	if (upper == UPPER)
	{
		current_number_uppers++;
	}
	return current_number_uppers;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int is_space (char character)
{
	int space = 0;

	if (character == 9 || character == 10 ||character == 11||
		character == 13|| character == 32 )
	{
		space = WHITESPACE;
	}
	else
	{
		space = NOT_WHITESPACE;
	}
	return space;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int number_spaces (char character, int current_number_spaces)
{
	int spaces = 0;

	spaces = is_space (character);
	if (spaces == WHITESPACE)
	{
		current_number_spaces++;
	}
	return current_number_spaces;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int is_alnum (char character)
{
	int alnum = 0;
	
	if ((character > 64 && character < 91) || (character > 96 && character < 123)||
		(character > 47 && character < 58))
	{
		alnum = ALNUM;
	}
	else 
	{
		alnum = NOT_ALNUM;
	}
	return alnum;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int number_alnums (char character, int current_number_alnums)
{
	int alnums = 0;

	alnums = is_alnum (character);
	if (alnums == ALNUM)
	{
		current_number_alnums++;
	}
	return current_number_alnums;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int is_punct (char character)
{
	int punct = 0;

	if ((character > 32 && character < 48) || (character > 57 && character < 65)||
		(character > 90 && character < 97) || (character > 122 && character <127))
	{
		punct = PUNCT;
	}
	else 
	{
		punct = NOT_PUNCT;
	}
	return punct;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int number_puncts (char character, int current_number_puncts)
{
	int puncts = 0;

	puncts = is_punct(character);
	if (puncts == PUNCT)
	{
		current_number_puncts++;
	}
	return current_number_puncts;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
void print_int (FILE *outfile_stats, int number)
{
	fprintf (outfile_stats, "%d\n", number);
}
//////////////////////////////////////////////
//////////////////////////////////////////////
void print_stats (FILE *outfile_ascii, char header[], int number)
{
	fprintf (outfile_ascii, "%d\n", number);
}
//////////////////////////////////////////////
//////////////////////////////////////////////
