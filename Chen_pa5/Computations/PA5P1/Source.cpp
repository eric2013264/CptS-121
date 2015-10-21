/************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: Personal Assignment 5 Part 1 - Computations			    *
* Date: Mar 6, 2014															        *
* Description: Processes Computations.											    *
************************************************************************************/

#include "Header.h"

void is_multiple (int number, char *answer)
{
	if ((number % 7 == 0) || (number % 11 == 0) || (number % 13 == 0))
		*answer = 'y';
	else
		*answer = 'n';
}

void sum_odd_or_even (int number, char *answer)
{
	if (number % 2 == 0)
		*answer = 'e';
	else
		*answer = 'o';
}

void prime_or_not (int number, char *answer)
{
	int check = 0, i = 0;

	for (number = 2; number <= number/2; i++)
	{
		if (number % 1 == 0)
		{
			check = 0;
			break;
		}
	}
	if (check == 0)
		*answer = 'y';
	else
		*answer = 'n';
}