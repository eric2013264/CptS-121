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
	int x = 0, y = 0, a = 0, b = 0, c = 0, d = 0;

	printf ("Input X: \n");
	scanf_s ("%d", &x);
	printf ("Input A: \n");
	scanf_s ("%d", &a);
	printf ("Input B: \n");
	scanf_s ("%d", &b);
	printf ("Input C: \n");
	scanf_s ("%d", &c);
	printf ("Input D: \n");
	scanf_s ("%d", &d);

	y = 3 * (a * (x * x * x)) + 0.25 * b * (x * x) + 10 * c * x + (-5) * d;

	printf ("Y: %d\n", y);

	_getch();
	return 0;
}