//#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main (void)
{
	int random_value = 0, guess = 1, attempts = 0;
	srand (time (NULL));

	random_value = (rand ()%200)-100;
		
	do
	{
		printf ("enter your guess: \n");
		scanf ("%d", &guess);
		attempts ++;

		if (guess > random_value && guess <= 100)
		{
			printf ("too high \n");
		}
		else if (guess < random_value && guess >= -100)
		{
			printf ("too low \n");
		}
		else if ((guess < -100) || (guess > 100))
		{
			printf ("...not in range \n");
		}
	} while (guess != random_value);

	printf ("nice! you got it in %d guesses!", attempts);

	_getch();
	return 0;
}
