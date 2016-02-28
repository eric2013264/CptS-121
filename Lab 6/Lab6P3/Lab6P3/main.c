#include <stdio.h>


int main (void)
{
	int first_number = 0, second_number = 1, next_number = 0, n = 0;

	printf ("enter the nth term you wish to find: ");
	scanf ("%d", &n);

	if (n == 1)
	{
		printf ("%d", first_number);
	}
	else if (n == 2)
	{
		printf ("%d", second_number);
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
		printf ("%d \n", next_number);
	}

	return 0;
}