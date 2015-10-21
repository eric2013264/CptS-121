 /************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: Lab 4														*
* Date: Feb 11, 2014														     	*
* Description: ?																	*
************************************************************************************/

#include "Header.h"

//////////////////////////////////////////////
//////////////////////////////////////////////
char read_char (FILE *infile)
{
	char character = '\0';

	fscanf (infile, " %c", &character);
	return character;
}
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
void print_double (FILE *outfile, double number)
{
	fprintf (outfile, "%10.2lf\n", number);
}
//////////////////////////////////////////////
//////////////////////////////////////////////