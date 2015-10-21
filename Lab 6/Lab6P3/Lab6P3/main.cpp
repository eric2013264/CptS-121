#include <stdio.h>
#include <conio.h>


int main (void)
{
	double first_number = 0, second_number = 1, next_number = 0, n = 0;

	printf ("enter the nth term you wish to find: ");
	scanf ("%lf", &n);

	if (n == 1)
	{
		printf ("%lf", first_number);
	}
	else if (n == 2)
	{
		printf ("%lf", second_number);
	}
	else
	{
		n = n - 2;
		while (n > 0)
		{
		next_number = first_number + second_number;
		first_number = second_number;
		second_number = next_number;
		n--;
		}
		printf ("%lf \n", next_number);
	}
_getch();
return 0;
}