 /************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: Assignment 3												*
* Date: Feb 11, 2014														     	*
* Description: This program provides statistical analysis on student's grades		*
************************************************************************************/

#include "Header.h"

//////////////////////////////////////////////
//////////////////////////////////////////////
double read_double (FILE *infile)
{
	double number = 0.0;

	fscanf (infile, "%lf", &number);
	return number;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
int read_int (FILE *infile)
{
	int number = 0;

	fscanf (infile, "%d", &number);
	return number;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
double calculate_sum (double number1, double number2, double number3, double number4, double number5)
{
	double sum = 0.0;

	sum = number1 + number2 + number3 + number4 + number5;
	return sum;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
double calculate_mean (double sum, int number)
{
	double mean = 0.0;

	mean = sum / number;
	if (number == 0)
	{
		return -1; // potential error
	}
	return mean;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
double calculate_deviation (double number, double mean)
{
	double deviation = 0.0;

	deviation = number - mean;
	return deviation;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
double calculate_variance (double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
{
	double variance = 0.0;

	//variance = (pow((deviation1), 2) + pow((deviation2), 2) + pow((deviation3), 2) + pow((deviation4), 2) + pow((deviation5), 2)) / 2;
	variance = ((deviation1*deviation1) + (deviation2 * deviation2) + (deviation3 * deviation3) + (deviation4 * deviation4) + (deviation5 * deviation5))/number;
	return variance;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
double calculate_standard_deviation (double variance)
{
	double standard_deviation = 0.0;

	standard_deviation = sqrt(variance);
	return standard_deviation;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
double find_max (double number1, double number2, double number3, double number4, double number5)
{
	double max = 0.0;

	if (number1 >= number2 && 
		number1 >= number3 && 
		number1 >= number4 && 
		number1 >= number5)
	{
		max = number1; // number 1
	}
	else if (number2 >= number1 &&
		number2 >= number3 && 
		number2 >= number4 && 
		number2 >= number5)
	{
		max = number2; // number 2
	}
	else if (number3 >= number1 && 
		number3 >= number2 && 
		number3 >= number4 && 
		number3 >= number5)
	{
		max = number3; // number 3
	}
	else if (number4 >= number1 && 
		number4 >= number2 && 
		number4 >= number3 && 
		number4 >= number5)
	{
		max = number4; // number 4
	}
	else if (number5 >= number1 && 
		number5 >= number2 && 
		number5 >= number4 && 
		number5 >= number5)
	{
		max = number5; // number 5
	}
	return max;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
double find_min (double number1, double number2, double number3, double number4, double number5)
{
	double min = 0.0;

	if (number1 <= number2 && 
		number1 <= number3 && 
		number1 <= number4 && 
		number1 <= number5)
	{
		min = number1; // number 1
	}
	else if (number2 <= number1 &&
		number2 <= number3 && 
		number2 <= number4 && 
		number2 <= number5)
	{
		min = number2; // number 2
	}
	else if (number3 <= number1 && 
		number3 <= number2 && 
		number3 <= number4 && 
		number3 <= number5)
	{
		min = number3; // number 3
	}
	else if (number4 <= number1 && 
		number4 <= number2 && 
		number4 <= number3 && 
		number4 <= number5)
	{
		min = number4; // number 4
	}
	else if (number5 <= number1 && 
		number5 <= number2 && 
		number5 <= number4 && 
		number5 <= number5)
	{
		min = number5; // number 5
	}
	return min;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
void print_double (FILE *outfile, double number)
{
	fprintf (outfile, "%10.2lf\n", number);
}
//////////////////////////////////////////////
//////////////////////////////////////////////