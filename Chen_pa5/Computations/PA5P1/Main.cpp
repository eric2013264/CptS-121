#include "Header.h"

int main (void)
{
	FILE *infile = fopen("numbers.txt", "r");

	int number, count = 5;
	char answer;

	while (!feof(infile))
	{
		fscanf(infile, "%d", &number);
		printf("number is: %d\n", number);
		is_multiple(number, &answer);
		printf("is multiple of 7, 11, 13?: %c\n", answer);

		sum_odd_or_even(number, &answer);
		printf("sum of digits odd or even?: %c\n", answer);

		prime_or_not(number, &answer);
		printf("prime number?: %c\n", answer);
		printf("\n");
		count--;
	}

	fclose(infile);

	_getch();
	return 0;
}
