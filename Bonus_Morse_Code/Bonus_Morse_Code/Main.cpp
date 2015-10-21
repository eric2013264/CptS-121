#include "Header.h"

int main(void)
{
	FILE *infile = NULL, *outfile = NULL;
	int num_of_chars = 0;
	char morse_strings[91][6];
	char input[3][20];
	
	printf("Please Input: Conversion Option, Source File, Destination File \n");
	printf("Conversion Options: \n");
	printf("-m means convert from English text to Morse code \n");
	printf("-t means convert from Morse code to English text\n\n");
	scanf("%s %s %s", &input[0], &input[1], &input[2]);

	infile = fopen(input[1], "r");
	if (infile == NULL)
	{
		printf("%s could not be found", input[1]);
		return -1;
	}

	outfile = fopen(input[2], "w");

	Morse_code(morse_strings);

	if (strcmp(input[0], "-m") == 0)
	{
		num_of_chars = English_to_morse(infile, outfile, morse_strings);
	}
	else if (strcmp(input[0], "-t") == 0)
	{
		num_of_chars = Morse_to_english(infile, outfile, morse_strings);
	}

	printf("Total characters converted successfully!: %d\n", num_of_chars);

	fclose(infile);
	fclose(outfile);

	return 0;
}