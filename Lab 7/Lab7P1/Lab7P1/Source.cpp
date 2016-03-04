#include "Header.h"
void charges(double *charge_2, double *avg, int hours) // <-- these don't have to be the same name but the types have to match up
{
	int i = 11;

	if (hours > 10)
	{
		*charge_2 = 7.99;
		for (int i = 11; i <= hours; i++)
		{
			*charge_2 = *charge_2 + 1.99;
		}
	*avg = *charge_2/hours;
	}

	else
	{
		*charge_2 = 7.99;
		*avg = 7.99/hours;
	}
}
		
void round_money(double *charge_2, double *avgcost_2) // asterick is to go to get value not address
{
	*charge_2 = ((int)(*charge_2 * 100 + 0.5)/100.0);
	*avgcost_2 = ((int)(*avgcost_2 * 100 + 0.5)/100.0);
}