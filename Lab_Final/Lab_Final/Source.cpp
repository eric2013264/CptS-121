#include "Header.h"

void get_name_of_file (char *file_name, int number_of_files, FILE *infile)
{
	char all_file_names[250] = "file_name_1, file_name_2, file_name_3, file_name_4, file_name_5, file_name_6, file_name_7, file_name_8, file_name_9, file_name_10";
	char *file_name_1, *file_name_2, *file_name_3, *file_name_4, *file_name_5, *file_name_6, *file_name_7, *file_name_8, *file_name_9, *file_name_10;
	int i = 0, x = 0, num_of_chars = 0, num_of_lines = 0, spaces = 0, total_chars = 0, total_lines = 0, num_of_words = 0, total_words = 0;
	char tmp[25];
	char tmp_char = '\0';
	char string_name[250] = {'\0'};

	char string[25] = {'\0'};

	for (i = 0; i < number_of_files; i++)
	{
		printf("Enter the name of text file %d: ", i+1);
		scanf("%s", tmp);
		strcat(string_name, tmp);
		strcat(string_name, " ");
	}

	// now that all of the file names are in one string and serperated by spaces, we scan for spaces to remove them
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	file_name_1 = strtok(string_name, " ");

	infile = fopen(file_name_1, "r");
	while (!feof(infile))
	{
		fscanf(infile, "%c", &tmp_char);
		if (tmp_char == '\n')
		{
			num_of_lines++;
		}
		if ((tmp_char == ' ')||(tmp_char == '\n'))
		{
			num_of_words++;
		}
		num_of_chars++;
	}
	printf("%s:  %d chars,      %d lines,      %d words \n", file_name_1, num_of_chars, num_of_lines, num_of_words);
	total_words += num_of_words;
	total_chars += num_of_chars;
	total_lines += num_of_lines;
	num_of_words = 0;
	num_of_chars = 0;
	num_of_lines = 0;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (number_of_files > 1)
	{
		file_name_2 = strtok(NULL, " ");

		infile = fopen(file_name_2, "r");
		while (!feof(infile))
		{
			fscanf(infile, "%c", &tmp_char);
			if (tmp_char == '\n')
			{
				num_of_lines++;
			}
			if ((tmp_char == ' ')||(tmp_char == '\n'))
			{
				num_of_words++;
			}
			num_of_chars++;
		}
		printf("%s:  %d chars,      %d lines,      %d words \n", file_name_2, num_of_chars, num_of_lines, num_of_words);
		total_words += num_of_words;
		total_chars += num_of_chars;
		total_lines += num_of_lines;
		num_of_words = 0;
		num_of_chars = 0;
		num_of_lines = 0;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (number_of_files > 2)
	{
		file_name_3 = strtok(NULL, " ");

		infile = fopen(file_name_3, "r");
		while (!feof(infile))
		{
			fscanf(infile, "%c", &tmp_char);
			if (tmp_char == '\n')
			{
				num_of_lines++;
			}
			if ((tmp_char == ' ')||(tmp_char == '\n'))
			{
				num_of_words++;
			}
			num_of_chars++;
		}
		printf("%s:  %d chars,      %d lines,      %d words \n", file_name_3, num_of_chars, num_of_lines, num_of_words);
		total_words += num_of_words;
		total_chars += num_of_chars;
		total_lines += num_of_lines;
		num_of_words = 0;
		num_of_chars = 0;
		num_of_lines = 0;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (number_of_files > 3)
	{
		file_name_4 = strtok(NULL, " ");

		infile = fopen(file_name_4, "r");
		while (!feof(infile))
		{
			fscanf(infile, "%c", &tmp_char);
			if (tmp_char == '\n')
			{
				num_of_lines++;
			}
			if ((tmp_char == ' ')||(tmp_char == '\n'))
			{
				num_of_words++;
			}
			num_of_chars++;
		}
		printf("%s:  %d chars,      %d lines,      %d words \n", file_name_4, num_of_chars, num_of_lines, num_of_words);
		total_words += num_of_words;
		total_chars += num_of_chars;
		total_lines += num_of_lines;
		num_of_words = 0;
		num_of_chars = 0;
		num_of_lines = 0;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (number_of_files > 4)
	{
		file_name_5 = strtok(NULL, " ");

		infile = fopen(file_name_5, "r");
		while (!feof(infile))
		{
			fscanf(infile, "%c", &tmp_char);
			if (tmp_char == '\n')
			{
				num_of_lines++;
			}
			if ((tmp_char == ' ')||(tmp_char == '\n'))
			{
				num_of_words++;
			}
			num_of_chars++;
		}
		printf("%s:  %d chars,      %d lines,      %d words \n", file_name_5, num_of_chars, num_of_lines, num_of_words);
		total_words += num_of_words;
		total_chars += num_of_chars;
		total_lines += num_of_lines;
		num_of_words = 0;
		num_of_chars = 0;
		num_of_lines = 0;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (number_of_files > 5)
	{
		file_name_6 = strtok(NULL, " ");

		infile = fopen(file_name_6, "r");
		while (!feof(infile))
		{
			fscanf(infile, "%c", &tmp_char);
			if (tmp_char == '\n')
			{
				num_of_lines++;
			}
			if ((tmp_char == ' ')||(tmp_char == '\n'))
			{
				num_of_words++;
			}
			num_of_chars++;
		}
		printf("%s:  %d chars,      %d lines,      %d words \n", file_name_6, num_of_chars, num_of_lines, num_of_words);
		total_words += num_of_words;
		total_chars += num_of_chars;
		total_lines += num_of_lines;
		num_of_words = 0;
		num_of_chars = 0;
		num_of_lines = 0;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (number_of_files > 6)
	{
		file_name_7 = strtok(NULL, " ");

		infile = fopen(file_name_7, "r");
		while (!feof(infile))
		{
			fscanf(infile, "%c", &tmp_char);
			if (tmp_char == '\n')
			{
				num_of_lines++;
			}
			if ((tmp_char == ' ')||(tmp_char == '\n'))
			{
				num_of_words++;
			}
			num_of_chars++;
		}
		printf("%s:  %d chars,      %d lines,      %d words \n", file_name_7, num_of_chars, num_of_lines, num_of_words);
		total_words += num_of_words;
		total_chars += num_of_chars;
		total_lines += num_of_lines;
		num_of_words = 0;
		num_of_chars = 0;
		num_of_lines = 0;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (number_of_files > 7)
	{
		file_name_8 = strtok(NULL, " ");

		infile = fopen(file_name_8, "r");
		while (!feof(infile))
		{
			fscanf(infile, "%c", &tmp_char);
			if (tmp_char == '\n')
			{
				num_of_lines++;
			}
			if ((tmp_char == ' ')||(tmp_char == '\n'))
			{
				num_of_words++;
			}
			num_of_chars++;
		}
		printf("%s:  %d chars,      %d lines,      %d words \n", file_name_8, num_of_chars, num_of_lines, num_of_words);
		total_words += num_of_words;
		total_chars += num_of_chars;
		total_lines += num_of_lines;
		num_of_words = 0;
		num_of_chars = 0;
		num_of_lines = 0;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (number_of_files > 8)
	{
		file_name_9 = strtok(NULL, " ");

		infile = fopen(file_name_9, "r");
		while (!feof(infile))
		{
			fscanf(infile, "%c", &tmp_char);
			if (tmp_char == '\n')
			{
				num_of_lines++;
			}
			if ((tmp_char == ' ')||(tmp_char == '\n'))
			{
				num_of_words++;
			}
			num_of_chars++;
		}
		printf("%s:  %d chars,      %d lines,      %d words \n", file_name_9, num_of_chars, num_of_lines, num_of_words);
		total_words += num_of_words;
		total_chars += num_of_chars;
		total_lines += num_of_lines;
		num_of_words = 0;
		num_of_chars = 0;
		num_of_lines = 0;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (number_of_files > 9)
	{
		file_name_10 = strtok(NULL, " ");

		infile = fopen(file_name_10, "r");
		while (!feof(infile))
		{
			fscanf(infile, "%c", &tmp_char);
			if (tmp_char == '\n')
			{
				num_of_lines++;
			}
			if ((tmp_char == ' ')||(tmp_char == '\n'))
			{
				num_of_words++;
			}
			num_of_chars++;
		}
		printf("%s:  %d chars,      %d lines,      %d words \n", file_name_10, num_of_chars, num_of_lines, num_of_words);
		total_words += num_of_words;
		total_chars += num_of_chars;
		total_lines += num_of_lines;
		num_of_words = 0;
		num_of_chars = 0;
		num_of_lines = 0;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf("Totals:  %d chars,      %d lines,      %d words \n", total_chars, total_lines, total_words);	

}			
	

