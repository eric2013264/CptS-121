#include <stdio.h>
#include <conio.h>

int main (void)
{
	double factorial = 1, new_n = 0, n = 0, increment = 1, one_smaller = 0;

	printf ("enter n to calculate the factorial: ");
	scanf ("%lf", &n);

	do
	{
	one_smaller = n - increment;
	factorial = factorial * one_smaller;

	
	printf ("%lf = %lf - %lf \n", one_smaller, n, increment);
	increment++;
	} while (increment < n);

	factorial = factorial * n;
	printf ("factorial = %lf", factorial);

_getch();
return 0;
}