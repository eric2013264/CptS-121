#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1415926
#define G 6.67 * 0.00000000010

//Function Prototypes

double calculate_newtons_2nd_law (double mass, double acceleration);
double calculate_cylindrical_volume (double radius, double height);
char get_character ();
char perform_character_encoding (char plaintext_character);
double calculate_gravity_force (double mass_1, double mass_2, double distance);
double calculate_resistive_divider (double resistance1, double resistance2, double vin);
double calculate_distance_between_2pts (double x1, double x2, double y1, double y2);
double calculate_general_equation (int a, double x, double z);