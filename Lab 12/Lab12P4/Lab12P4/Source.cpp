#include "Header.h"

void towers(int number_disks, char frompeg, char topeg, char auxpeg)
{

	if (number_disks == 1)								// for disk 1
	{
		printf("Move disk 1 from peg %c to peg %c\n", frompeg, topeg);
		return;
	}

	towers(number_disks - 1, frompeg, auxpeg, topeg);	// frompeg = A auxpeg = B topeg = C
														// frompeg = A auxpeg = C topeg = B
														// frompeg = C auxpeg = A topeg = B
														// frompeg = A auxpeg = B topeg = C
														// frompeg = B auxpeg = C topeg = A
														// frompeg = B auxpeg = A topeg = C
														// frompeg = A auxpeg = B topeg = C

	printf("Move disk %d from %c to %c \n", number_disks, frompeg, topeg);
	towers(number_disks - 1, auxpeg, topeg, frompeg);	// swaps frompeg w/ auxpeg. topeg w/ frompeg

}