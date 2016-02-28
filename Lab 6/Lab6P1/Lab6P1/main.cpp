#include "Header.h"

int main (void)
{
	int sum = 0, result = 0, current = 0;

	FILE * infile = fopen("number.txt", "r");	// Open file for reading

	while (!feof(infile))			// Read
	{
		fscanf(infile, "%d", &current);
		sum = sum + current;		// Sum it up
	}

	result = is_prime(sum);	// Check if it's prime

	if (result == TRUE) {	// Handle returned "result" value
		printf ("%d is a prime number! \n", sum);
	} else {
		printf("%d is not a prime number! \n", sum);
	}

	are_sum_of_digits_prime(sum);
	fclose (infile);

	return 0;
}
