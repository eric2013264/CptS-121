#include "Header.h"

int pallindrome(char *name, int pos)
{
	// base function
	// when do we want it to stop?
	// when we get halfway through the word
	if (pos >= strlen(name)/2)
	{
		return 1;
	}
	// checks if it's a pallindrome
	else if (name[pos] != name[strlen(name)-pos-1])
	{
		return 0;
	}
	else
	{
		pos ++;
		return pallindrome(name, pos);
	}
}