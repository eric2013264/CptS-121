#include "Header.h"

int main (void)
{
	int factorial = 1, n = 0;

	n = get_user_input(n);

	factorial = calculate_factorial(n);

	printf ("factorial = %d", factorial);

	return 0;
}