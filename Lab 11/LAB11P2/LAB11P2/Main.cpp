#include "Header.h"

int main (void)
{
	char maze_array[8][8] =	   {{'-', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
								{'-', '-', '-', '-', '-', '-', '-', 'x'},
								{'x', 'x', 'x', '-', '-', '-', '-', 'x'},
								{'-', '-', 'x', 'x', 'x', 'x', '-', 'x'},
								{'-', '-', '-', '-', '-', 'x', '-', 'x'},
								{'-', '-', '-', '-', '-', 'x', '-', 'x'},
								{'-', '-', '-', '-', '-', 'x', '-', '-'},
								{'-', '-', '-', '-', '-', '-', 'x', '-'}};

	char output[500] = {'\0'};

    int result = 0, row = 0, col = 0;

    maze(maze_array, row, col, output, &result);

	if (result == 1)
	{
		printf("%s\n", output);
	}


    _getch();
    return 0;
}