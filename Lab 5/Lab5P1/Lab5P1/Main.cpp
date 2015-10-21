#include "Header.h"

int main (void)
{
	int current = 0, total = 0;
	char result = 'z';

	FILE *infile = fopen("Salaries.txt", "r");
	
	while (!feof(infile))
	{
		fscanf(infile, "%d", &current);
		total = total + current;
	}

	result = taxBracket(total);
	printf("%c\n", result);
	fclose(infile);

	_getch();
	return 0;
}