#include "Header.h"

double sum = 0.0, average = 0.0, number = 0.0;
int count = 0;

double get_average (FILE *infile)
{
	while (!feof (infile))
	{
		fscanf(infile, "%lf", &number);
		count ++;
		sum += number;
	}
	average = sum / count; 

	return average;
}