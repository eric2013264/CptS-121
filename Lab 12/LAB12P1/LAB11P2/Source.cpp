#include "Header.h"

void maze(char arr[8][8], int row, int col, char output[], int *result)
{
	char tmp[50] = {'\0'};;

	if (row == 7 && col == 7)
	{
		sprintf(tmp, " (%d, %d) DONE \n\n", row, col);
		strcat(output, tmp);
		*result = 1;
	}
	else if (row + 1 < 8 && arr[row+1][col] != 'x')
	{
		sprintf(tmp, " (%d, %d) \n", row, col);
		strcat(output, tmp);
		row++;
		maze(arr, row, col, output, result);
	}
	else if (col + 1 < 8 && arr[row][col+1] != 'x')
	{
		sprintf(tmp, " (%d, %d) \n", row, col);
		strcat(output, tmp);
		col++;
		maze(arr, row, col, output, result);
	}
	else if (row - 1 < 8 && arr[row-1][col] != 'x')
	{
		sprintf(tmp, " (%d, %d)\n", row, col);
		strcat(output, tmp);
		row--;
		maze(arr, row, col, output, result);
	}
	else if (col - 1 < 8 && arr[row][col-1] != 'x')
	{
		sprintf(tmp, " (%d, %d) \n", row, col);
		strcat(output, tmp);
		col--;
		maze(arr, row, col, output, result);
	}
}