 /************************************************************************************
* Programmer: Eric Chen																*
* Class: CptS 121, Spring 2014; Lab Section 6										*
* Programming Assignment: Assignment 1												*
* Date: January 20-29, 2014															*
* Description: This program evaluates mathematical equations.						*
************************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1415926
#define G 6.67 * 0.00000000010

int main (void)
{
//first equation variables//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	double mass = 0.0, acceleration = 0.0, force = 0.0;
//second equation variables//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	double radius = 0.0, height = 0.0, volume_cylinder = 0.0;
//third equation variables//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	char letter = '\0';
	int a = 0, A = 0;
//fourth equation variables//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	double mass_1 = 0.0, mass_2 = 0.0, distance = 0.0, force_2 = 0.0;
//fifth equation variables//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	double vout = 0.0, r1 = 0.0, r2 = 0.0, vin = 0.0;
//sixth equation variables//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, distance_2 = 0.0, answer1, answer2;
//seventh equation variables//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	double x_1 = 0.0, z_1 = 0.0, y_1 = 0.0, answer_3;
	int a_1 = 0;

//first//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("Enter mass and then acceleration (floats seperated by a space) for use in Newton's Second Law: \n");
	scanf ("%lf%lf", &mass, &acceleration);

	force = mass * acceleration;

	printf ("Newton's Second Law: force = mass * acceleration: %lf * %lf = %lf\n", mass, acceleration, force);
	printf ("\n");

//second//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	printf ("Enter radius and then height (floats seperated by a space) for use in a volume of a cylinder equation: \n");
	scanf ("%lf%lf", &radius, &height);

	volume_cylinder = PI * (radius * radius) * height;

	printf ("Volume of cylinder: volume_cylinder = PI * radius^2 * height =  %lf * %lf^2  * %lf = %lf\n", PI, radius, height, volume_cylinder);
	printf ("\n");

//third//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	printf ("enter plain text character: ");
	scanf (" %c", &letter);
	printf ("enter two numbers to encode with: ");
	scanf (" %d %d", &a, &A);

	letter = (letter - a) + A;
	printf ("character: %c\n", letter);

	printf ("Encoded character: encoded_character = (plain_text - 'a') + 'A': (%c - %d) + %d = %c", letter, a, A, letter);
	printf ("\n");

//fourth//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	printf ("Enter mass_1 and then mass_2, and then the distance for the gravity formula: \n");
	scanf ("%lf%lf%lf", &mass_1, &mass_2, &distance);

	force_2 = G * mass_1 * mass_2 / distance * distance;

	printf ("Gravity: force = g * mass_1 * mass_2 / distance^2: %lf * %lf / %lf^2 = %10.15lf\n", mass_1, mass_2, distance, force_2);
	printf ("\n");

//fifth//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	printf ("Enter r1, r2, and vin for Resistive Divider Equation: \n");
	scanf ("%lf%lf%lf", &r1, &r2, &vin);

	vout = r2 / ((r1 * vin) + (r2 * vin));

	printf ("Resistive Divider: vout = r2 / (r1 + r2) * vin... r1:%lf r2:%lf vin:%lf vout:%lf\n", r1, r2, vin, vout);
	printf ("\n");

//sixth//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	printf ("Enter x1, x2, y1, y2 for Distance Between Points Equation: \n");
	scanf ("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);

	answer1 = pow((x1 - x2), 2);
	answer2 = pow((y1 - y2), 2);
	distance_2 = sqrt(answer1 + answer2);

	printf ("Distance between points: sqrt((x1 - x2)^2 + (y1 - y2)^2): sqrt((%lf - %lf)^2 + (%lf - %lf)^2 = %lf\n", x1, x2, y1, y2, distance_2);
	printf ("\n");

//seventh//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	printf ("Enter x, z, and a to find y: ");
	scanf ("%lf%lf%d", &x_1, &z_1, &a_1);

	answer_3 = a_1 % 2;
	y_1 = 1.4 * x_1 + z_1 - a_1 / answer_3 + PI;

	printf ("Y = (7 / 5) * x + z - a / (a % 2) + PI: (7 / 5) * %lf + %lf - %d / (%d % 2) + PI = %lf\n", x_1, z_1, a_1, a_1, y_1); 
	printf ("\n");

	_getch();
	return 0;

}
