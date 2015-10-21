#include "Header.h"

char * string_reverse (char * line)
{
	int length = 0, 
		left = 0,
		right = 0;
	char tmp = '\0';

	if (line == NULL)
	{
		printf("string is null\n");
	}

	while (line[length] != '\0')
	{
		length++;			// find the length of the string
	}

	right = length - 1;		// right most

	while (left < right)	// move from cell 0 to middle. left --> middle
	{
		tmp = line[left];	// store the rightmost cell into tmp
		line[left] = line[right]; // set the rightmost cell into left
		line[right] = tmp;	// set tmp to leftmost cell
		left ++;
		right --;
	}

	return line;
}
	

