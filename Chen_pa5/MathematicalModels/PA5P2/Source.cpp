 /***********************************************************************************************
* Programmer: Eric Chen																			*
* Class: CptS 121, Spring 2014; Lab Section 6													*
* Programming Assignment: 5 Part 2 - Mathematical Models									 	*
* Date: March 7, 2014																			*
* Description: Converts Mathematical Models using pointers  (note: coordinates can only be ints)*
************************************************************************************************/

#include "Header.h"

void main_menu (int *p_menu_choice)
{

	printf (" Select the form that you would like to conver to slope-intercept form:         \n");
	printf ("  --------PRESS 1-   Two-point form. (you know two points on the line)          \n");
	printf ("    ------PRESS 2-   Point-slope form. (you know the line's slope and one point)\n");
	printf ("      ----PRESS 3-   Exit.	                                                     \n");
	printf("\n");
	printf ("\n ==> ");
	scanf (" %d", p_menu_choice);

}

void get_coordinates(int *p_x, int *p_y)
{
	printf ("enter the x-y coordinates of the 1st point separated by a space \n");
	printf ("\n ==> ");	
	scanf (" %d %d", p_x, p_y);
	printf("\n");
}

void get_coordinates_2(int *p_x_2, int *p_y_2)
{
	printf ("enter the x-y coordinates of the 2nd point separated by a space \n");
	printf ("\n ==> ");	
	scanf (" %d %d", p_x_2, p_y_2);
	printf("\n");
}

void display_two_point(int *p_x, int *p_y, int *p_x_2, int *p_y_2)
{
	printf("\nTWO-POINT FORM:    \n");
	printf("\n");
	printf("      (%d - %d)    \n", *p_y_2, *p_y);
	printf(" m = ------------- \n");
	printf("      (%d - %d)    \n", *p_x_2, *p_x);

}

void calculate_slope(double *slope, int *p_x, int *p_y, int *p_x_2, int *p_y_2)
{
	double rise = 0.0, run = 0.0;

	rise = *p_y_2 - *p_y;
	run = *p_x_2 - *p_x; 
	*slope = rise/run;

}

void display_slope_intercept(double *slope, int *p_x, int *p_y)
{
	double b = 0.0;

	printf("\nSLOPE-INTERCEPT FORM:    \n");
	printf("\n");
	b = *p_y - (*slope * *p_x);
	printf("y = %.2lfx + %.2lf", *slope, b);
	printf("\n");
}

void get_slope(double *p_slope)
{
	printf ("enter the slope \n");
	printf("\n");
	printf ("\n ==> ");	
	scanf (" %lf", p_slope);
}

void display_point_slope(double *slope, int *p_x, int *p_y)
{
	printf("\nPOINT-SLOPE FORM:    \n");
	printf("\n");
	printf("y - %d = %.2lf(x - %d)", *p_y, *slope, *p_x);
	printf("\n");

}
