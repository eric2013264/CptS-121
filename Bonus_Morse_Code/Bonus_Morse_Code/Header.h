#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Morse_code(char morse_strings[91][6]);
int English_to_morse(FILE *infile, FILE *outfile, char morse_strings[91][6]);
int Morse_to_english(FILE *infile, FILE *outfile, char morse_strings[91][6]);