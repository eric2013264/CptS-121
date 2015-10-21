#include "Header.h"

int main (void)
{
	int sum = 0, result = 0, current = 0;

	FILE * infile = fopen("number.txt", "r");

	while (!feof(infile))
	{
		fscanf(infile, "%d", &current);
		sum = sum + current;
	}
	result = is_sum_prime (sum);
	if (result == TRUE)
	{
		printf ("%d is a prime number! \n", sum);
	}
	else
	{
		printf ("%d is not a prime number! \n", sum);
	}
	are_digs_prime(sum);
	fclose (infile);

_getch();
return 0;
}
