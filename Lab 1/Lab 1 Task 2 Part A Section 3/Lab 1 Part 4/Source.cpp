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
	int number1_int = 0, answer = 0;
	double number2_float = 0;

	printf ("First int: \n");
	scanf_s ("%d", &number1_int);
	printf ("Second float: \n");
	scanf_s ("%lf", &number2_float);

	answer = number1_int * number2_float;

	printf ("Answer: %d\n", answer);

	_getch();
	return 0;
}