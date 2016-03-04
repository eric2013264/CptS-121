#include <stdio.h>

double read_double(FILE *infile);
char read_char(FILE *infile);
int read_int(FILE *infile);

void print_double(FILE *outfile, double number);
double calculate_bonus(FILE *outfile);
char readC();

double part3(FILE *infile);
int menu(int menu_choice);
double find_max(double, double, double, double, double);
double find_min(double, double, double, double, double);