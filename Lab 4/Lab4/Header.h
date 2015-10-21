#include <stdio.h>
#include <conio.h>

FILE * open_input_file(void);

double read_double (FILE *infile);
int read_int (FILE *infile);

void print_double (FILE *outfile, double number);