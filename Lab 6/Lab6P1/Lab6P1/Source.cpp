#include "Header.h"

int is_prime (int sum)
{
	int i = 2; 

	for (int i = 2; i < sum; i++)	// from 1-sum, we mod every number leading up to (and including) half of sum. Don't waste time with modding stuff like 6 % 4. 
	{
		if (sum % i == 0)
		{
			return FALSE;
		}
	}
	return TRUE;
}

void are_sum_of_digits_prime (int sum)
{
	int digit = 0, result = 0, tmpsum = sum, digit_sum = 0; 
	while (tmpsum != 0)
	{
		digit = tmpsum % 10;	// Mod by 10 to get furthest right digit value

		digit_sum += digit;

		tmpsum = tmpsum/10;	// Divide by 10 and floor to essentially "remove" the rightmost digit 
	}
	result = is_prime(digit_sum);

	// Handle return value of is_prime
	if (result == TRUE) {
		printf("%d is a prime number! \n", digit_sum);
	}
	else {
		printf("%d is not a prime number! \n", digit_sum);
	}

}