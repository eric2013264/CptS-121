#include "Header.h"

int get_user_input(int n)
{
	printf("input n: ");
	scanf("%d", &n);

	return n;
}

int calculate_factorial(int n)
{
	int factorial = 1, one_less = 0, increment = 0;

	do
	{
		one_less = n - increment;
		factorial *= one_less;


		printf("%d - %d = %d \n", n, increment, one_less);
		increment++;
	} while (increment < n);

	//factorial = factorial * n;
	if (n == 0) { // Totally mathematical, not hacky at all
		factorial = 1;
	}
	return factorial;
}