#include "Header.h"

int main(void)
{
	int i;
	int sum;

	printf("input a number: ");
	scanf("%d", &i);

	sum = sum_of_digits(i) ;

	printf("sum: %d", sum);

	_getch();
	return 0;
}