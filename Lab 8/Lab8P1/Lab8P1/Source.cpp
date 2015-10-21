#include "Header.h"

void reverse (int Arr[])
{
	int k = 4, // five spots, but 0 counts
		tmp = 0,
		i = 0;
	for (i = 0; i < k; i++)
	{
		tmp = Arr[i];	// store 1										|  5  |  4  |  3  |  2  |  1  |
		Arr[i] = Arr[k];// swap											|_____|_____|_____|_____|_____|
		Arr[k] = tmp;	// store 1 to 5									|     |     |     |     |     |
		k--;			// where k represents the values from the back	|  0  |  1  |  2  |  3  |  4  |
	}					//												   i		   <           k
}
