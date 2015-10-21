#include <stdio.h>
#include <conio.h>

double get_coord(char axis, int coordnum);
double get_slope(double x1, double x2, double y1, double y2);
double midpoint(double var1, double var2);
double get_Perbis(double slope);
double get_y_intercept(double perbis, double mid_x, double mid_y);

int main(void)
{
	double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, slope = 0.0, mid_x = 0.0, mid_y = 0.0, Perbis = 0.0;
	char letterx = 'x', lettery = 'y';
	x1 = get_coord(1, letterx);
	x2 = get_coord(2, letterx);
	y1 = get_coord(1, lettery);
	y2 = get_coord(2, lettery);

	double midpoint(double x1, double x2, double y1, double y2);

	slope = get_slope(x1, x2, y1, y2);

	Perbis = get_Perbis(slope);

	_getch();
	return 0;
}

double get_coord(int coordnum, char axis)
{
	double coord = 0;

	printf ("Input coordinate %d of the %c axis: ", coordnum, axis);

	scanf ("%lf", &coord);

	return coord;
}
double get_slope(double x1,double x2,double y1,double y2)
{
	double slope = 0.0;

	slope = (y2 - y1) / (x2 - x1);

	printf ("the slope is: %lf\n", slope);

	return slope;
}

double midpoint(double x1, double x2, double y1, double y2)
{

	mid_x = (x1 + x2)/2;
	mid_y = (y1 + y2)/2;

	printf ("the midpoint is: %lf,%lf\n", mid_x, mid_y);
	return 0;
}
double get_Perbis (double slope)
{
	double perbis = 0.0;

	perbis = -1/slope;

	printf ("Perpendicular Bisector is: %lf\n", perbis);

	return perbis;
}
double get_y_intercept(double perbis, double mid_x, double mid_y)
{
	double y_intercept = 0.0;

	y_intercept = mid_y - (perbis * mid_x);

	printf ("Y intercept is: %lf\n", y_intercept);
	
	return y_intercept;
}
