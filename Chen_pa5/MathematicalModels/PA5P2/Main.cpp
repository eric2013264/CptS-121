#include "Header.h"

int main (void)
{
	int 	menu_choice = 0, x = 0, y = 0, x_2 = 0, y_2 = 0;
	int 	*p_menu_choice = NULL, *p_x = NULL, *p_x_2 = NULL, *p_y = NULL, *p_y_2 = NULL;
	double 	slope = 0.0, *p_slope = NULL;

///////////////////////////////////////////////////////////////////////////////////////////////////
	do
	{
///////////////////////////////////////////////////////////////////////////////////////////////////
		do
		{
			p_menu_choice = &menu_choice;
			printf("\n");
			main_menu(p_menu_choice);
		} while ((menu_choice < 1) || (menu_choice > 3));
///////////////////////////////////////////////////////////////////////////////////////////////////
		if (menu_choice == 1) // TWO-POINT FORM
		{
			p_x = &x;
			p_x_2 = &x_2;
			p_y = &y;
			p_y_2 = &y_2;

			get_coordinates(p_x, p_y);
			get_coordinates_2(p_x_2, p_y_2);
			calculate_slope(&slope, p_x, p_y, p_x_2, p_y_2);
			display_two_point(p_x, p_y, p_x_2, p_y_2);
			display_slope_intercept(&slope, p_x, p_y);

		}
///////////////////////////////////////////////////////////////////////////////////////////////////
		if (menu_choice == 2) // POINT-SLOPE FORM
		{
			p_slope = &slope;
			p_x = &x;
			p_y = &y;
			get_slope(p_slope);
			get_coordinates(p_x, p_y);
			display_point_slope(&slope, p_x, p_y);
			display_slope_intercept(&slope, p_x, p_y);

		}
		if (menu_choice == 3)
		{	
			break;
		}
///////////////////////////////////////////////////////////////////////////////////////////////////
		printf("\n//////////////////////////////////////////////////////////////////////////////");
		printf("\n//////////////////////////////////////////////////////////////////////////////");
		printf("\n");

	} while ((menu_choice > 0 ) || ( menu_choice < 4));

	printf("\n");
	printf("thanks for using MathematicalModels by Eric Chen");

	_getch();
	return 0;
}

