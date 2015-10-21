#include "Header.h"

void recursively_reverse_string(char *str, int pos)
{
	char temp;

	if (pos >= strlen(str)/2)
	{
		printf("complete.\n");
	}
	else
	{
		temp = str[pos];
		str[pos] = str[strlen(str)- pos - 1];
		str[strlen(str) - pos - 1] = temp;
		pos++;
		recursively_reverse_string(str, pos);
	}
}