#include "Header.h"

int main (void){
	FILE *infile = NULL;
	infile = fopen ("input.txt", "r");
	int tmpNum = 0, 
		i = 0,
		array_num = 0,
		x = 5;
	int Arr[5] = {0, 0, 0, 0, 0};

	printf("BEFORE SORTING:\n");

	while (!feof(infile))
	{
		fscanf(infile, "%d", &tmpNum);	// store all values into Arr[]
		if (i < 5)
		{
			Arr[i] = tmpNum;
			printf("Arr[%d] = %d\n", i, tmpNum);
		}
		i++;
	}
	reverse(Arr);

	printf("AFTER SORTING:\n");

	while (x > 0)
	{
		printf("Arr[%d] = %d\n", array_num, Arr[array_num]);
		array_num++;
		x--;
	}

	_getch();

}