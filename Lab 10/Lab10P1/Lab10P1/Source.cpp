#include "Header.h"

int Construct_Word (char *article[], char *verb[], char *noun[], char *proposition[])
{
	int clear = 0;
	int sentence = 0;
	char output [100] = {'\0'};	// it looks for null, and now null is in the beginning
	int index = 0;
	int word = 0;

	for (sentence = 0; sentence < 20; sentence++)
	{
		for (word = 0; word < 6; word++)
		{
			index = (rand()%5); // random value less than 5 so it can pick from the words in an array

			if (index != 0)		// cuz if it's 0 then we don't want to minus 1
			{
				index--;
			}
			if (word == 0)
			{
				strcat(output, article[index]);			// syntax (destination, source)
				output [0] = toupper((int)output[0]);	// this is a function from <ctype.h>
			}
			else if (word == 1)
			{
				strcat(output, " ");
				strcat(output, noun[index]);
			}
			else if (word == 2)
			{
				strcat(output, " ");
				strcat(output, verb[index]);
			}
			else if (word == 3)
			{
				strcat(output, " ");
				strcat(output, proposition[index]);
			}
			else if (word == 4)
			{
				strcat(output, " ");
				strcat(output, article[index]);
			}
			else if (word == 5)
			{
				strcat(output, " ");
				strcat(output, noun[index]);
				strcat(output, "!\n");
				printf("%s", output);
				for (clear = 0; clear < 100; clear++)
				{
					output[clear] = '\0';
				}
			}
		}
	}
	return 0;
}