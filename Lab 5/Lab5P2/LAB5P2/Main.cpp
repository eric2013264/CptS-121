#include <stdio.h>
#include "Header.h"

int main (void)
{
	FILE 	*infile = NULL,
			*outfile = NULL;

	char 	file_name[FILE_NAME_SIZE];	
	double	average = 0;

	printf ("Enter the name of the file to read from: ");
	scanf ("%s", file_name);

	if ((infile = fopen (file_name, "r")) == NULL)
	{
		printf ("Error: Cannot open %s for reading!\n", file_name);
	}
	average = get_average(infile);
	outfile = fopen ("output.dat", "w");
	fprintf(outfile, "Average: %lf", average);
	fclose (infile);
	fclose (outfile);
	return 0;
}