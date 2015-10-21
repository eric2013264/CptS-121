#include "Header.h"

int main (void)
{
	char *article[5] = {"the", "a", "one", "some", "any"};
	char *noun[5] = {"boy", "girl", "dog", "town", "car"};
	char *verb[5] = {"drove", "jumped", "ran", "walked", "skipped"};
	char *proposition[5] = {"to", "from", "over", "under", "on"};

	srand ((unsigned int) time (NULL));

	Construct_Word(article, verb, noun, proposition);

	_getch();

	return 0;
}
