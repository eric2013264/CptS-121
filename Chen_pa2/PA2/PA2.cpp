#include "PA2.h"

//first//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double calculate_newtons_2nd_law (double mass, double acceleration)
{
	double force = 0.0; //local variable

	force = mass * acceleration;
	printf ("force = mass * acceleration : %lf * %lf = %10.2lf\n\n", mass, acceleration, force);

	return force;
}
//second//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double calculate_cylindrical_volume (double radius, double height)
{
	double volume_cylinder = 0.0;

	volume_cylinder = PI * (radius * radius) * height;
	printf ("volume = PI * radius^2 * height : %lf * %lf^2 * %lf = %10.2lf\n\n", PI, radius, height, volume_cylinder);

	return volume_cylinder;
}

//third//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
char perform_character_encoding (char plaintext_character)
{
	int encodenum1 = 2, encodenum2 = 6;
	char encoded_character = '\0';

	encoded_character = (plaintext_character - encodenum1) + encodenum2;
	printf ("encoded letter = plaintext character - a) + A : (%c - 'a') + 'A' = %c\n\n", plaintext_character, encoded_character);

	return encoded_character;
}
//fourth//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double calculate_gravity_force (double mass_1, double mass_2, double distance)
{
	double force_2 = 0.0;

	force_2 = G * mass_1 * mass_2 / distance * distance;
	printf ("force = G * mass 1 * mass 2 / distance * distance : G * %lf * %lf / %lf * %lf, %10.15lf\n\n", mass_1, mass_2, distance, distance, force_2);

	return force_2;
}
//fifth//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double calculate_resistive_divider (double r1, double r2, double vin)
{	
	double vout = 0.0;

	vout = r2 / ((r1 * vin) + (r2 * vin));
	printf ("vout = r2 / ((r1 * vin) + (r2 * vin)) : %lf / ((%lf * %lf) + (%lf * %lf)) = %10.2lf\n\n", r2, r1, vin, r2, vin, vout);

	return vout;
}
//sixth//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double calculate_distance_between_2pts (double x1, double x2, double y1, double y2)
{
	double distance_2 = 0.0, answer1 = 0.0, answer2 = 0.0;

	answer1 = pow((x1 - x2), 2);
	answer2 = pow((y1 - y2), 2);
	distance_2 = sqrt(answer1 + answer2);
	printf ("distance = (x1 - x2)^2 + (y1 - y2)^2 : (%lf - %lf)^2 + (%lf - %lf)^2 = %10.2lf\n\n", x1, x2, y1, y2, distance_2);

	return distance_2;
}

//seventh//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double calculate_general_equation (int a_1, double x, double z)
{
	double y = 0.0, answer_3 = 0.0; 
	
	answer_3 = a_1 % 2;
	y = 1.4 * x + z - a_1 / answer_3 + PI;
	printf ("y = 7/5 * x + z - a / a mod 2 + PI: 7/5 * %lf + %lf - %d / %d mod 2 + PI = %10.2lf\n\n", x, z, a_1, a_1, y);

	return y; 
}
