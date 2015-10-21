#include "Header.h"

int main (void){

	int tmpNum = 0,
		count = 0,
		index = 0;
	int Arr[20] = {0, 0, 0, 0, 0};
	int Arr_2[101] = {0, 0, 0, 0, 0};

	srand ((unsigned int) time (NULL));

	while (index < 20)
	{
		Arr[index] = (rand ()%100)+1;
		printf ("Arr[%d]: %d\n", index, Arr[index]);
		index++;
	}
	for (index = 0; index < 20; index++)
	{
		Arr_2[Arr[index]]++;
	}
	while (count < 100)
	{
		count++;
		printf("Number %d was generated %d time(s)\n", count, Arr_2[count]);

	}



	_getch();

}