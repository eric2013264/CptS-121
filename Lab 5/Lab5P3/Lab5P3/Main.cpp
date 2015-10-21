#include "Header.h"

int main (void)
{
	int number1 = 0, number2 = 0, remainder_num = 0;

	printf("please input 2 integers: ");
	scanf("%d%d", &number1, &number2);

	if (number1 < 0)
	{
		number1 = number1 * -1;
	}
	else if (number2 < 0)
	{
		number2 = number2 * -1;
	}

	remainder_num = find_remainder(number1, number2);

printf ("%d", remainder_num);

_getch();
return 0;
}