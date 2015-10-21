 /************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: Lab 4	Part 2													*
* Date: Feb 11, 2014														     	*
* Description: ?																	*
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
double calculate_sum (double number1, double number2, double number3, 
					  double number4, double number5)
{
	double sum = 0.0;

	sum = number1 + number2 + number3 + number4 + number5;
	return sum;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
double calculate_mean (double sum)
{
	double mean = 0.0;

	mean = sum / 5;
	return mean;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
double find_max (double number1, double number2, double number3, double number4, double number5
	)
{
	double max = 0.0;

	if (number1 >= number2 && 
		number1 >= number3 && 
		number1 >= number4 && 
		number1 >= number5
		)
	{
		max = number1; // number 1
	}
	else if (number2 >= number1 &&
		number2 >= number3 && 
		number2 >= number4 && 
		number2 >= number5
		)
	{
		max = number2; // number 2
	}
	else if (number3 >= number1 && 
		number3 >= number2 && 
		number3 >= number4 && 
		number3 >= number5
		)
	{
		max = number3; // number 3
	}
	else if (number4 >= number1 && 
		number4 >= number2 && 
		number4 >= number3 && 
		number4 >= number5
		)
	{
		max = number4; // number 4
	}
	else if (number5
	 >= number1 && 
		number5
		 >= number2 && 
		number5
		 >= number4 && 
		number5
		 >= number5
		 )
	{
		max = number5
		; // number 5
	}
	return max;
}
//////////////////////////////////////////////
//////////////////////////////////////////////
double find_min (double number1, double number2, double number3, double number4, double number5
	)
{
	double min = 0.0;

	if (number1 <= number2 && 
		number1 <= number3 && 
		number1 <= number4 && 
		number1 <= number5
		)
	{
		min = number1; // number 1
	}
	else if (number2 <= number1 &&
		number2 <= number3 && 
		number2 <= number4 && 
		number2 <= number5
		)
	{
		min = number2; // number 2
	}
	else if (number3 <= number1 && 
		number3 <= number2 && 
		number3 <= number4 && 
		number3 <= number5
		)
	{
		min = number3; // number 3
	}
	else if (number4 <= number1 && 
		number4 <= number2 && 
		number4 <= number3 && 
		number4 <= number5
		)
	{
		min = number4; // number 4
	}
	else if (number5
	 <= number1 && 
		number5
		 <= number2 && 
		number5
		 <= number4 && 
		number5
		 <= number5
		 )
	{
		min = number5
		; // number 5
	}
	return min;
}