#include "lab3.h"


int main(void)
{
	char character = '\0';
	int current_number_lines = 0, current_number_vowels = 0, current_number_digits = 0,
		current_number_alphas = 0, current_number_lower = 0, current_number_upper = 0,
		current_number_space = 0, current_number_alnum = 0, current_number_punct = 0, 
		ascii_value = 0;

	FILE *infile = NULL, *outfile_stats = NULL, *outfile_ascii = NULL;

	infile = open_input_file();
	outfile_stats = fopen("output_stats","w");
	outfile_ascii = fopen("output_ascii","w");

	if ((infile == NULL )||(outfile_stats == NULL)||(outfile_ascii == NULL))
	{
		printf ("error");
	}
	else
	{
		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

	//2
		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);
	  
	//3
		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);	
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

	
	//4
		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);
	  
	//5
		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		
	//6
		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);
	  
	//7
		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);
	
		
	//8
		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);
	  
	//9
		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);		
		
		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		character = read_character(infile);
		ascii_value = determine_ascii_value(character);
		print_int(outfile_ascii, ascii_value);
		current_number_lines = number_lines(character, current_number_lines);
		current_number_vowels = number_vowels(character, current_number_vowels);
		current_number_digits = number_digits(character, current_number_digits);
		current_number_alphas = number_alphas(character, current_number_alphas);
		current_number_lower = number_lowers(character, current_number_lower);
		current_number_upper = number_uppers(character, current_number_upper);
		current_number_space = number_spaces(character, current_number_space);
		current_number_alnum = number_alnums(character, current_number_alnum);
		current_number_punct = number_puncts(character, current_number_punct);

		print_stats (outfile_stats, "Number Lines\n", current_number_lines);
		print_stats (outfile_stats, "Number Vowels\n", current_number_vowels);
		print_stats (outfile_stats, "Number Digits\n", current_number_digits);
		print_stats (outfile_stats, "Number Alphas\n", current_number_alphas);
		print_stats (outfile_stats, "Number Lowers\n", current_number_lower);
		print_stats (outfile_stats, "Number Uppers\n", current_number_upper);
		print_stats (outfile_stats, "Number Spaces\n", current_number_space);
		print_stats (outfile_stats, "Number Alnums\n", current_number_alnum);
		print_stats (outfile_stats, "Number Puncts\n", current_number_punct);

		fclose (infile);
		fclose (outfile_stats);
		fclose (outfile_ascii);
		printf ("success.");
	}
	_getch();
	return 0;
}