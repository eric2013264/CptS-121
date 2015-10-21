#include "Header.h"

int main (void)
{
	FILE *infile = NULL;

	int num_of_files = 0;
	int i = 0;
	char file_name[25];

	do
	{
		printf("Enter the number of text files to process: ");
		scanf("%d", &num_of_files);
	} while (num_of_files > 10);


	get_name_of_file (file_name, num_of_files, infile);

	num_of_files = 11;	// keeps it from "going around again"

	printf("\n");
	system("pause");
	return 0;
}