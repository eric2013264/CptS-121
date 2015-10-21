/************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: Lab 5														*
* Date: Feb 20, 2014														     	*
* Description: ?																	*
************************************************************************************/

#include "Header.h"

char taxBracket (int salary)
{
	if (salary < 15000)
		{
			return 'l';
		}
	else if (15000 < salary)
		{
			if (15000 < salary < 200000)
			{
				return 'm';
			}
		}
	else if (200000 < salary)
		{
			return 'h';
		}	
}