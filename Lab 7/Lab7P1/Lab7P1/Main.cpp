#include "Header.h"

int main (void)
{
	FILE *infile = NULL;
	FILE *outfile = NULL;
	infile = fopen ("input.txt", "r");
	outfile = fopen("output.txt", "w");

	int month = 0, year = 0, customer = 0, hours = 0, rounded = 0;
	double avgcost = 0.0, charge = 0.0;

	fscanf(infile, "%d", &month);
	fscanf(infile, "%d", &year);
	fscanf(infile, "%d", &customer);
	fscanf(infile, "%d", &hours);

	charges(&charge, &avgcost, hours);	// variables with & are ones you wanna change
	round_money(&charge, &avgcost);		// more changing

	fprintf(outfile, "customer: %d\n", customer);
	fprintf(outfile, "charge: %lf\n", charge);
	fprintf(outfile, "average cost: %lf\n", avgcost);
	fprintf(outfile, "&charge: %d\n", &charge);

	fclose (infile);
	fclose (outfile);

	return 0;
}
