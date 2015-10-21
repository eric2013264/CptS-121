#include "Header.h"

int sum_of_digits(int i) 
{
	if (i < 10) 
	{
		return i;
	}
	else 
	{
		return i%10 + sum_of_digits(i/10);
	}
}