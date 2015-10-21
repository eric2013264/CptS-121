#include "Header.h"

int main (void)
{
//1////////////////////////////////////////////////////////////////////
	char gender = '\0', activity_level = '\0';
	int age = 0;
	double weight = 0.0, height = 0.0, calories = 0.0, BMR = 0.0;
//2////////////////////////////////////////////////////////////////////
	char answer1 = '\0', answer2 = '\0', answer3 = '\0', answer4 = '\0', 
	answer5 = '\0', answer6 = '\0', answer7 = '\0';
	double bonus = 0.0;
//ERROR CHECKING//////////////////////////////////////////////////////
	FILE *infile = NULL, *infile2 = NULL, *outfile = NULL;

	infile = fopen("input.dat", "r");
	outfile = fopen("output.dat", "w");
	
	if ((infile == NULL )||(outfile == NULL))
	{
		printf ("error");
	}
	else
	{
//1////////////////////////////////////////////////////////////////////
//1////////////////////////////////////////////////////////////////////
	gender = read_char (infile);
	age = read_int (infile);
	weight = read_double (infile);
	height = read_double (infile);
	activity_level = read_char (infile);

switch (gender)
{
	case 'f':
	case 'F':
		BMR = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
		break;
	case 'm':
	case 'M':
		BMR = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
		break;
	default:
		printf("unrecognized symbol");
		break;
}

switch (activity_level) 
{
	case 's':
	case 'S':
		calories = BMR * 1.2;
		break;
	case 'l':
	case 'L':
		calories = BMR * 1.375;
		break;
	case 'm':
	case 'M':
		calories = BMR * 1.55;
		break;
	case 'h':
	case 'H':
		calories = BMR * 1.725;
		break;
	case 'e':
	case 'E':
		calories = BMR * 1.9;
		break;
	default:
		printf("unrecognized symbol");
		break;
}
	print_double (outfile, calories);

//2////////////////////////////////////////////////////////////////////////////
//2////////////////////////////////////////////////////////////////////////////

	printf("all-star game appearance? (y/n): ");
	scanf (" %c", &answer1);
	printf("regular season MVP? (y/n): ");
	scanf (" %c", &answer2);
	printf("world series MVP? (y/n): ");
	scanf (" %c", &answer3);
	printf("Gold Glove award? (y/n): ");
	scanf (" %c", &answer4);
	printf("Silver Slugger award? (y/n): ");
	scanf (" %c", &answer5);
	printf("Home run champ? (y/n): ");
	scanf (" %c", &answer6);
	printf("Batting average champ? (y/n): ");
	scanf (" %c", &answer7);

switch (answer1)
{
	case 'y':
		bonus = bonus + 25000;
		break;
	case 'n':
		bonus = bonus + 0;
		break;
}

switch (answer2)
{
	case 'y':
		bonus = bonus + 75000;
		break;
	case 'n':
		bonus = bonus + 0;
		break;
}

switch (answer3)
{
	case 'y':
		bonus = bonus + 100000;
		break;
	case 'n':
		bonus = bonus + 0;
		break;
}

switch (answer4)
{
	case 'y':
		bonus = bonus + 50000;
		break;
	case 'n':
		bonus = bonus + 0;
		break;
}

switch (answer5)
{
	case 'y':
		bonus = bonus + 35000;
		break;
	case 'n':
		bonus = bonus + 0;
		break;
}

switch (answer6)
{
	case 'y':
		bonus = bonus + 25000;
		break;
	case 'n':
		bonus = bonus + 0;
		break;
}

switch (answer7)
{
	case 'y':
		bonus = bonus + 25000;
		break;
	case 'n':
		bonus = bonus + 0;
		break;
}

	print_double (outfile, bonus);

	fclose (infile);
	fclose (outfile);
	printf ("success");

	}
	_getch();
	return 0;
}