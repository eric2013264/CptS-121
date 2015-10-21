#include <stdio.h>
#include <conio.h>

FILE * open_input_file(void);

double read_double (FILE *infile);
double calculate_sum (double number1, double number2, double number3, double number4, double number5);
double calculate_mean (double sum);
double find_max (double number1, double number2, double number3, double number4, double number5);
double find_min (double number1, double number2, double number3, double number4, double number5);