#include "Header.h"

int main(void)
{
	//part a vars ////////////////////////////////////////////////////////////////////
	char gender = '\0', activity_level = '\0';
	int age = 0;
	double weight = 0.0, height = 0.0, calories = 0.0, BMR = 0.0;

	FILE *infile = NULL, *outfile = NULL;

	infile = fopen("input.dat", "r");	// Open input file for reading
	outfile = fopen("output.dat", "w");	// Open output file for writing

	// Error checking: check if files are good to go
	if ((infile == NULL) || (outfile == NULL))
	{
		printf("error");
	}
	else // We good to go!
	{
		gender = read_char(infile);	// Part 1: Call functions, read values
		age = read_int(infile);
		weight = read_double(infile);
		height = read_double(infile);

		printf("activity level? S L M H E: ");
		scanf("%c", &activity_level); // This is NOT read from file

		if (gender == 'f' || gender == 'F')
		{
			BMR = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);	// female equation
		}
		else if (gender == 'm' || gender == 'M')
		{
			BMR = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);	// male equation
		}
		else
		{
			printf("invalid input");
			return;
		}

		if (activity_level == 's' || activity_level == 'S')
		{
			calories = BMR * 1.2;
		}
		else if (activity_level == 'l' || activity_level == 'L')
		{
			calories = BMR * 1.375;
		}
		else if (activity_level == 'm' || activity_level == 'M')
		{
			calories = BMR * 1.55;
		}
		else if (activity_level == 'h' || activity_level == 'H')
		{
			calories = BMR * 1.725;
		}
		else if (activity_level == 'e' || activity_level == 'E')
		{
			calories = BMR * 1.9;
		}
		else
		{
			printf("invalid input");
			return; 
		}

		print_double(outfile, calories);

		calculate_bonus(outfile);

		part3(infile);
		

		fclose(infile);
		fclose(outfile);
		printf("Done! \n");
	}

	return 0;
}