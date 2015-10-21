/*******************************************************************************************
* Programmer: Eric Chen                                                                         *
* Class: CptS 121, Spring 2014; Lab Section 6                                           *
* Programming Assignment: Lab1                                                    *
* Date: January 20, 2014                                                                             *
* Description: Add number1_float and number2_float together and print the result as an float value.    *
*******************************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (void)
{
	double number1_float = 0.0, number2_float = 0.0, answer = 0.0;

	printf ("First float: \n");
	scanf_s ("%lf", &number1_float);
	printf ("Second float: \n");
	scanf_s ("%lf", &number2_float);

	answer = number1_float - number2_float;

	printf ("Answer: %lf\n", answer);

	_getch();
	return 0;
}