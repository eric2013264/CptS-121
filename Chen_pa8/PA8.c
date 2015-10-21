// PA8
 /************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: 8															*
* Date: May 2, 2014															     	*
* Description: PA8																	*
************************************************************************************/

// 1

void my_str_n_cpy(char *dest, char *source, int n)
{
	int i;

	for (i = 0; (source[i] != '\0' && i < n); i++)
	{
		dest[i] = source[i];
	}
}

// 2

int binary_search (int list[SIZE], int num_items, int target)
{
	int left_index = 0, right_index = 0, mid_index = 0, found_ptr = -1;

	right_index = num_items - 1;
	while ((found_ptr == -1) && (left_index <= right_index))
	{
		mid_index = (left_index + right_index) / 2;
		if (target == list[mid_index])
		{
			found_ptr = 0;
			target = mid_index;
		}
		else if (target < list[mid_index]) 
		{
			right_index = mid_index - 1;
		}
		else
		{
			left_index = mid_index + 1;
		}
	}
	return target;
}

// 3

void bubble_sort (char *set[], int size) 
{ 
	int index_1, index_2 = 0, length = (size - 1);
	char *temp;

	while (index_2 < (size - 1)) 
	{
		for (index_1 = 0; index_1 < length; index_1++) 
		{
			if (strlen(set[index_1]) > strlen(set[index_1 + 1])) 
			{
				temp = set[index_1];
				set[index_1] = set[index_1+1];
				set[index_1+1] = temp;
			}
		}
		length -= 1;
		index_2 += 1;
	} 
}

// 4

int pallindrome(char *name, int pos)
{
	// base function
	// when we get halfway through the word
	if (pos >= strlen(name)/2)
	{
		return 1;	
	}
	// checks if it's a pallindrome
	else if (name[pos] != name[strlen(name)-pos-1])
	{
		return 0;	// no
	}
	else
	{
		pos ++;
		return pallindrome(name, pos);
	}
}

// 5

#ifndef HEADER_H	
#define HEADER_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void sum_primes(int n, int *sum);

#endif

// MAIN
int main()
{
    int sum = 0;
	int n = 0;
	int original_value = 0;

	printf("please input the value for n: ");
	scanf("%d", &n);
	original_value = n;

	sum_primes(n, &sum);
	printf("Sum of prime numbers from 2 - %d is: %d", original_value, sum);
	
	printf("\n");
	system("pause");
    return 0;
}

#include"header.h"

// SOURCE
void sum_primes(int n, int *sum)
{
	int i = 0;
	int not_prime = 0;

	if (n >= 2)
	{
		for (i = n-1; i >= 2; i--)
		{
			if (n % i == 0)	// NOT PRIME
			{
				not_prime += 1;
			}
		}
	}

	if (n == 2)
	{
		*sum += 2;
		not_prime = -1;
	}
    if (not_prime > 0)	// NOT PRIME
    {
		if (n > 2)	// continue
		{
			sum_primes(n-1, sum);	// next number
		}
    }
    if (not_prime == 0)
    {
        *sum += n;
		if (n > 2)	// continue
		{
			sum_primes(n-1, sum);
		}
    }
}

// 6

void maximum_occurences (char *alpha_num, Occurrences structs_array[], int *integer, char *character) 
{
	int index = 0, index2 = 0, index3 = 0, char_num, char_max = 0, len = strlen(alpha_num);
	
	while (index2 < 123) // 122 is the maximum asscii value for alphanums
	{ 
		structs_array[index2].num_occurrences = 0; //this initiallizes everything to 0 & 1;
		structs_array[index2].frequency = 0;
		index2 += 1;
	}
	while (index < len) 
	{
		char_num = ("%d", alpha_num[index]); 	// char to ascii
		structs_array[char_num].num_occurrences += 1;
		structs_array[char_num].frequency = ((double) structs_array[char_num].num_occurrences) / ((double)len);
		index += 1;
	}
	*integer = 0;
	while (index3 < len) 
	{
		char_num = ("%d", alpha_num[index3]);
		if (structs_array[char_num].num_occurrences > *integer) 
		{
			*integer = structs_array[char_num].num_occurrences; // max occurences
			char_max = char_num;
		}
		index3 += 1;
	}
	*character = ("%c", char_max); //this converts ascii value back to character;
}

// 7

int sum_smallest_sequence (int numbers[], int size) 
{
	int index = 0, smallest = 0, sum = 0;
	
	for (index = 0; index < size; index++) 
	{
		if (sum > smallest) {
			sum = numbers[index];
		}
		else 
		{
			sum += numbers[index];
		}
		if (sum < smallest) 
		{
			smallest = sum;
		}
	}
	return smallest;
} 

