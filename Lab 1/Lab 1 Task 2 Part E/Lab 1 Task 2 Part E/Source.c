#include <stdio.h>
#include <conio.h>

#define PI 3.14159

int main (void)
{
	double Circumference = 0, Radius = 0;

	printf ("Input radius: \n");
	scanf_s ("%d", &Radius);

	Circumference = 2 * PI * Radius;

	printf ("Circumference (units squared): %d\n", Circumference);

	_getch();
	return 0;
}