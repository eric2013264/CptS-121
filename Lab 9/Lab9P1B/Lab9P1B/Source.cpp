#include "Header.h"

char * string_reverse (char * line)
{
	int length = 0;
	char * left = line;
	char * right = line;
	char tmp = '\0';

	if (line == NULL)
	{
		printf("string is null\n");
	}

	while (*right != '\0')
	{
		right++;			// find the length of the string
	}

	right = right - 1;		// right most

	while (left < right)	// move from cell 0 to middle. left --> middle
	{
		tmp = * left;	// store the rightmost cell into tmp
		* left = * right; // set the rightmost cell into left
		* right = tmp;	// set tmp to leftmost cell
		left ++;
		right --;
	}

	return line;
}
	

