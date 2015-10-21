#include "Header.h"

void main (void)
{
	char string_1[20] = "hello world";
	char string_2[20] = "something else";
	int result = 0;

	printf("string 1: %s\n", string_1);
	printf("string 2: %s\n\n", string_2);

	printf("strcpy\n");
	my_strcpy (string_1, string_2);
	printf("string 1: %s\n", string_1);
	printf("string 2: %s\n\n", string_2);

	printf("strcat\n");
	my_strcat(string_1, string_2);
	printf("string 1: %s\n", string_1);
	printf("string 2: %s\n\n", string_2);

	printf("strlen\n");
	printf("length of string_1: %d\n", my_strlen (string_1));
	printf("string 1: %s\n", string_1);
	printf("string 2: %s\n\n", string_2);

	printf("strcmp\n");
	result = my_strcmp(string_1, string_2);
	printf("%d was returned", result);

	_getch();
}