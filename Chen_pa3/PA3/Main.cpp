#include "Header.h"


int main(void)
{

	int 	number = 5, ID1 = 0, ID2 = 0, ID3 = 0, ID4 = 0, ID5 = 0,
			class1 = 0, class2 = 0, class3 = 0, class4 = 0, class5 = 0;
	double 	gpa1 = 0.0, gpa2 = 0.0, gpa3 = 0.0, gpa4 = 0.0, gpa5 = 0.0,
			age1 = 0.0, age2 = 0.0, age3 = 0.0, age4 = 0.0, age5 = 0.0,
			sum_gpa = 0.0, sum_class_standings = 0.0, sum_age = 0.0, 
			mean_gpa = 0.0, mean_class_standings = 0.0, mean_age = 0.0,
			deviation1 = 0.0, deviation2 = 0.0, deviation3 = 0.0,
			deviation4 = 0.0, deviation5 = 0.0, variance = 0.0, 
			standard_deviation = 0.0, min = 0.0, max = 0.0; 

	FILE *infile = NULL, *outfile = NULL;

	infile = fopen("input.dat", "r");
	outfile = fopen("output.dat","w");

	if ((infile == NULL )||(outfile == NULL))
	{
		printf ("error");
	}
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
	else
	{
	ID1 = read_int (infile);
	gpa1 = read_double (infile);
	class1 = read_int (infile);
	age1 = read_double (infile);

	ID2 = read_int (infile);
	gpa2 = read_double (infile);
	class2 = read_int (infile);
	age2 = read_double (infile);

	ID3 = read_int (infile);
	gpa3 = read_double (infile);
	class3 = read_int (infile);
	age3 = read_double (infile);

	ID4 = read_int (infile);
	gpa4 = read_double (infile);
	class4 = read_int (infile);
	age4 = read_double (infile);

	ID5 = read_int (infile);
	gpa5 = read_double (infile);
	class5 = read_int (infile);
	age5 = read_double (infile);

	sum_gpa = calculate_sum (gpa1, gpa2, gpa3, gpa4, gpa5); // name doesn't matter
	sum_class_standings = calculate_sum ((double) class1,(double) class2,(double) class3,(double) class4,(double) class5);
	sum_age = calculate_sum (age1, age2, age3, age4, age5);

	mean_gpa = calculate_mean (sum_gpa, number);	// calculates average GPA
	mean_class_standings = calculate_mean (sum_class_standings, number); // calculates average class standings
	mean_age = calculate_mean (sum_age, number);	// calcultes average age

	print_double(outfile, mean_gpa); 				// writes average GPA
	print_double(outfile, mean_class_standings);	// writes average class standings
	print_double(outfile, mean_age);				// writes average age

	deviation1 = calculate_deviation (gpa1, mean_gpa);
	deviation2 = calculate_deviation (gpa2, mean_gpa);
	deviation3 = calculate_deviation (gpa3, mean_gpa);
	deviation4 = calculate_deviation (gpa4, mean_gpa);
	deviation5 = calculate_deviation (gpa5, mean_gpa);

	variance = calculate_variance (deviation1, deviation2, deviation3, deviation4, deviation5, number); 
	standard_deviation = calculate_standard_deviation (variance);

	print_double(outfile, standard_deviation); 		// writes standard deviation

	max = find_max (gpa1, gpa2, gpa3, gpa4, gpa5);	// calculates max gpa
	min = find_min (gpa1, gpa2, gpa3, gpa4, gpa5);	// calculates min gpa

	print_double(outfile, min); 					// writes min gpa
	print_double(outfile, max);						// writes max gpa


	fclose (infile);
	fclose (outfile);
	printf ("success");
	}

	_getch();
	return 0;
}