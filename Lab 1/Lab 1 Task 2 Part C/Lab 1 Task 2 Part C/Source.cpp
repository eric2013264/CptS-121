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
	int Voltage = 0, Power = 0, Resistance = 0;

	printf ("Input Voltage(V): \n");
	scanf_s ("%d", &Voltage);
	printf ("Input Resistance(R): \n");
	scanf_s ("%d", &Resistance);

	Power = (Voltage * Voltage) / Resistance;

	printf ("Power: %d\n", Power);

	_getch();
	return 0;
}

