/************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: Personal Assignment 2									    *
* Date: Feb 4, 2014															        *
* Description: This modular-based program evaluates mathematical equations.		    *
************************************************************************************/
#include "PA2.h"

double calculate_newtons_2nd_law (double mass, double acceleration);
double calculate_cylindrical_volume (double radius, double height);
char perform_character_encoding (char plaintext_character);
double calculate_gravity_force (double mass_1, double mass_2, double distance);
double calculate_resistive_divider (double resistance1, double resistance2, double vin);
double calculate_distance_between_2pts (double x1, double x2, double y1, double y2);
double calculate_general_equation (int a_1, double x, double z);

int main (void)
{
	double	mass = 0.0, acceleration = 0.0, final_force = 0.0,
			radius = 0.0, height = 0.0,	final_volume = 0.0,
			mass_1 = 0.0, mass_2 = 0.0, distance = 0.0, final_force_2 = 0.0,
			r1 = 0.0, r2 = 0.0, vin = 0.0, vout = 0.0, final_vout = 0.0,
			x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, final_distance = 0.0,
			final_y = 0.0, y = 0.0, x = 0.0, z = 0.0;
	char 	final_character = '\0', plaintext_character = '\0';
	int		a_1 = 0;

	printf ("Enter mass and then acceleration (floats seperated by a space) for use in Newton's Second Law: \n");
	scanf ("%lf%lf", &mass, &acceleration);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("Enter radius and then height (floats seperated by a space) for use in a volume of a cylinder equation: \n");
	scanf ("%lf%lf", &radius, &height);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("enter the plaintext character you wish to encode: \n");
	scanf (" %c", &plaintext_character);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("Enter mass 1 and then mass 2, and distance for the gravity formula: \n");
	scanf ("%lf%lf%lf", &mass_1, &mass_2, &distance);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("Enter r1, r2, and vin for Resistive Divider Equation: \n");
	scanf ("%lf%lf%lf", &r1, &r2, &vin);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("Enter x1, x2, y1, y2 for to find the distance between them: \n");
	scanf ("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("Enter x, z, and a to find y: \n");
	scanf ("%lf%lf %d", &x, &z, &a_1);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	

	final_force = calculate_newtons_2nd_law(mass, acceleration); //function calls

	final_volume = calculate_cylindrical_volume(radius, height);

	final_character = perform_character_encoding(plaintext_character);

	final_force_2 = calculate_gravity_force(mass_1, mass_2, distance);

	final_vout = calculate_resistive_divider(r1, r2, vin);

	final_distance = calculate_distance_between_2pts(x1, x2, y1, y2);

	final_y = calculate_general_equation (a_1, x, z);


	_getch();
	return 0;
}

