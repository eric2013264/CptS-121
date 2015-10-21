#include "Header.h"



char * my_strcpy (char * dest, const char * src)
{
	// copy all characters from src to dest
	int index = 0;

	for (; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return dest;
}

char * my_strcat (char * dest, const char * src)
{
	// append the src string to the end of dest string
	int index = 0, index2 = 0;

	// find end of dest string
	for (index = 0; dest[index] != '\0'; index++)
	{
	}
	// copy src string to end of dest string
	for (index2 = 0; src[index2] != '\0'; index2++, index++)
	{
		dest[index] = src[index2];
	}

	dest[index] = '\0';

	return dest;
	
}

int my_strcmp(const char * string_1, const char * string_2)
{
	int index = 0;

	if (string_1[index] < string_2[index])
	{
		return -1;
	}
	else if (string_1[index] == string_2[index])
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int my_strlen (char *str)
{
	int index = 0, count = 0;

	while (str[index++] != '\0')
	{
		count++;
	}

	return count;
}
