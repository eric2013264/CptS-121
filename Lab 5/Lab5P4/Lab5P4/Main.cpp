#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (void)
{
	int number = 0, current_highest = 0, current_lowest = 999999;

	FILE *infile = fopen("input.dat", "r");
	
	while (!feof(infile))
	{
		fscanf(infile, "%d", &number);
		if (number > current_highest)
		{
			current_highest = number;
		}
		else if (number < current_lowest)
		{
			current_lowest = number;
		}
		else
		{
			current_highest = current_highest;
			current_lowest = current_lowest;
		}
	}

	printf("max: %d\n", current_highest);
	printf("min: %d\n", current_lowest);

	fclose(infile);

	_getch();
	return 0;
}