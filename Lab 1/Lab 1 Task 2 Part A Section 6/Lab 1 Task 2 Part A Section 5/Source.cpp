/*******************************************************************************************
* Programmer: Eric Chen                                                                         *
* Class: CptS 121, Spring 2014; Lab Section 6                                           *
* Programming Assignment: Lab1                                                    *
* Date: January 20, 2014                                                                             *
* Description: Divide number1_int by number2_int and print the result as an int/float value.    *
*******************************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (void)
{
	int number1_int = 0, number2_int = 0;
	double answer_float = 0.0;

	printf ("First int: \n");
	scanf_s ("%d", &number1_int);
	printf ("Second float: \n");
	scanf_s ("%d", &number2_int);

	(double)answer_float = (double)number1_int / number2_int;

	printf ("Answer float: %lf\n", answer_float);

	_getch();
	return 0;
}