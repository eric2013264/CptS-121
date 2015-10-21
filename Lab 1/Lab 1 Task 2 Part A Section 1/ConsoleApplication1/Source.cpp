/*******************************************************************************************
* Programmer: Eric Chen                                                                         *
* Class: CptS 121, Spring 2014; Lab Section 6                                           *
* Programming Assignment: Lab1                                                    *
* Date: January 20, 2014                                                                             *
* Description: Add number1_int and number2_int together and print the result as an integer value.    *
*******************************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (void)
{
	int number1_int = 0, number2_int = 0, answer = 0;

	printf ("First integer: \n");
	scanf_s ("%d", &number1_int);
	printf ("Second integer: \n");
	scanf_s ("%d", &number2_int);

	answer = number1_int + number2_int;

	printf ("Answer: %d\n", answer);

	_getch();
	return 0;
}