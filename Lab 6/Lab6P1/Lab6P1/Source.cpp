#include "Header.h"

int is_sum_prime (int sum)
{
	int i = 2; 

	for (int i = 2; i < sum; i++)
	{
		if (sum % i == 0)
		{
			return FALSE;
		}
	}
	return TRUE;
}

void are_digs_prime (int sum)
{
	int digit = 0, result = 0, tmpsum = sum; 
	while (tmpsum != 0)
	{
		digit = tmpsum % 10;
		result = is_sum_prime (digit);
		if (result == TRUE)
		{
			printf ("%d is prime \n", digit);
		}
		else
		{
			printf("%d is not prime \n", digit);
		}
		tmpsum = tmpsum/10;

	}
}