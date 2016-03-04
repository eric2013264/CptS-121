/************************************************************************************
* Programmer: TA Eric Chen															*
* Class: CptS 121, Spring 2016; Lab Section 8										*
* Programming Assignment: Lab 4														*
* Date: Feb 12, 2016														     	*
* Description: For lab demo purposes												*
************************************************************************************/

#include "Header.h"

// This function reads in a char from the infile
char read_char(FILE *infile)
{
	char character = '\0';

	fscanf(infile, " %c", &character);
	return character;
}
// This function reads in a double from the infile
double read_double(FILE *infile)
{
	double number = 0.0;

	fscanf(infile, "%lf", &number);
	return number;
}

// This function reads in an int from the infile
int read_int(FILE *infile)
{
	int number = 0;

	fscanf(infile, "%d", &number);
	return number;
}

// This function takes in a double (to the second decimal place)
// and writes it to the outfile
void print_double(FILE *outfile, double number)
{
	fprintf(outfile, "%10.2lf\n", number);
}

// This function calculates total bonus and writes it to the outfile
double calculate_bonus(FILE *outfile)
{
	int bonus = 0;
	char allStar, regularMVP, worldMVP, goldenGlove, silverSlugger;
	char homerunChamp, battingAvgChamp;

	printf("All Star (y/n): ");			// 1. READ
	allStar = readC();

	printf("Regular Season MVP (y/n): ");
	regularMVP = readC();

	printf("World Series MVP (y/n): ");
	worldMVP = readC();

	printf("Golden Glove (y/n): ");
	goldenGlove = readC();

	printf("Silver Slugger (y/n): ");
	silverSlugger = readC();

	printf("Homerun Champ (y/n): ");
	homerunChamp = readC();

	printf("Batting average champ (y/n): ");
	// scanf(" %c", &battingAvgChamp); ALTERNATIVE 
	battingAvgChamp = readC();

	if (allStar == 'y')		// 2. COMPARE
	{
		bonus += 25000;	// Increment! No set to! 
	}
	if (regularMVP == 'y')
	{
		bonus += 75000;
	}
	if (worldMVP == 'y')
	{
		bonus += 100000;
	}
	if (goldenGlove == 'y')
	{
		bonus += 50000;
	}
	if (silverSlugger == 'y')
	{
		bonus += 35000;
	}
	if (homerunChamp == 'y')
	{
		bonus += 25000;
	}
	if (battingAvgChamp == 'y')
	{
		bonus += 25000;
	}

	print_double(outfile, (double)bonus);
}

// Justin's custom read char program. Can be replaced by scanf
char readC()
{
	char c = '\0';
	scanf(" %c", &c);
	return c;
}

double part3(FILE *infile)
{
	double number1, number2, number3, number4, number5;
	double max = 0, min = 0;
	number1 = read_double(infile);
	number2 = read_double(infile);
	number3 = read_double(infile);
	number4 = read_double(infile);
	number5 = read_double(infile);

	int menu_choice = 0;
	menu_choice = menu(menu_choice);

	if (menu_choice == 1)
	{
		printf("%lf", (number1 + number2 + number3 + number4 + number5) / 5);
	}
	else if (menu_choice == 2)
	{
		max = find_max(number1, number2, number3, number4, number5);
		printf("The max value is: %lf\n", max);
	}
	else if (menu_choice == 3)
	{
		min = find_min(number1, number2, number3, number4, number5);
		printf("The min value is: %lf\n", min);
	}
	else
	{
		printf("invald input");
	}
}

double find_min(double n1, double n2, double n3, double n4, double n5)
{
	double min = n1;	// Set min to one of the numbers
	if (n2 < min)		// If the 2nd number is less than min
	{
		min = n2;		// It's now the "new" min!
	}
	if (n3 < min)		// If the 3rd number is less than min
	{
		min = n3;		// The 3rd number is now the new min!
	}
	if (n4 < min)		// See where we're going with this?
	{
		min = n4;
	}
	if (n5 < min)
	{
		min = n5;		
	}
	return min;			// By the end, either the original number is min
						// or one of the other 4. Do the same for find_max
}

double find_max(double n1, double n2, double n3, double n4, double n5)
{
	double max = n1;

	if (n2 > max)
	{
		max = n2;
	}
	if (n3 > max)
	{
		max = n3;
	}
	if (n4 > max)
	{
		max = n4;
	}
	if (n5 > max)
	{
		max = n5;
	}

	return max;
}

int menu(int menu_choice)
{
	printf(" MENU \n");
	printf("1. Average\n");
	printf("2. High value\n");
	printf("3. Low value\n");

	scanf("%d", &menu_choice);
	return menu_choice;
}