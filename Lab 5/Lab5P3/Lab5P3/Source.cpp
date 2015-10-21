#include "Header.h"

int find_remainder(int number1, int number2)
{
	int remainder_num = 10;
	while (remainder_num != 0)
	{
		remainder_num = number1 % number2;
		number1 = number2;
		number2 = remainder_num;
	}
	return number1;
}