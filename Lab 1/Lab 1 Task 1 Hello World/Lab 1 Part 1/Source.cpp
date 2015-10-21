/*******************************************************************************************
* Programmer: Your Name                                                                          *
* Class: CptS 121, Spring 2014; Lab Section X                                             *
* Programming Assignment: Lab1Task1                                                      *
* Date: January 20, 2014                                                                             *
* Description: This program prints out a simple "hello world" message.    *
*******************************************************************************************/

#include <stdio.h>				// include standard IO
#include <conio.h>

int main(void)					// there are no input arguements / begins executing
{
    printf("Hello World, I am in CptS 121!\n"); // \n is an escape character: new line

	_getch();
    return(0); 					// return 0 to whomever called it, it's an int
}