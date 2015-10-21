#include "Header.h"

int main(void)
{
	char input_string[20];
	int pos = 0;

	printf("type to store to input_string: ");
	gets(input_string);

	recursively_reverse_string(input_string, pos);

	printf("reversed string: %s", input_string);

	_getch();
	return 0;
}