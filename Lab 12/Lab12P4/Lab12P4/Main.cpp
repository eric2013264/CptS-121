#include "Header.h"

int main(void)
{
	char frompeg = 'A', topeg = 'C', auxpeg = 'B';
	int number_disks = 3;

	towers(number_disks, frompeg, topeg, auxpeg);


	printf("complete.");
	_getch();
	return 0;
}