#include "Header.h"

int main (void)
{
	double number1 = 0.0, number2 = 0.0, number3 = 0.0, number4 = 0.0, number5 = 0.0,
	sum = 0.0, mean = 0.0, max = 0.0, min = 0.0;
	char operation = '\0';

	FILE *infile = NULL, *outfile = NULL;

	infile = fopen("input.dat", "r");
	outfile = fopen("output.dat", "w");
	
	if ((infile == NULL )||(outfile == NULL))
	{
		printf ("error");
	}
	else
	{
	number1 = read_double (infile);
	number2 = read_double (infile);
	number3 = read_double (infile);
	number4 = read_double (infile);
	number5 = read_double (infile);

	printf ("select which operation to perform: \n");
	printf ("find average (a)\n");
	printf ("find high value (b)\n");
	printf ("find low value (c)\n");
	scanf (" %c", &operation);

	switch (operation)
	{
	case 'a':
		sum = calculate_sum (number1, number2, number3, number4, number5);
		mean = calculate_mean (sum);
		printf ("average: %lf", mean);
		break;
	case 'b':
		max = find_max (number1, number2, number3, number4, number5);
		printf ("max: %lf", max);
		break;
	case 'c':
		min = find_min (number1, number2, number3, number4, number5);
		printf ("min: %lf", min);
		break;
	default:
		printf("unrecognized symbol");
		break;
	}

	fclose (infile);
	fclose (outfile);

	}
	_getch();
	return 0;
}