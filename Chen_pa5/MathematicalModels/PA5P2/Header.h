#ifndef HEADER_H
#define HEADER_H
///////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
///////////////////////////////////////////////////////////////////////////////////////////////////
void main_menu(int *p_menu_choice);
void get_coordinates(int *p_x, int *p_y);
void get_coordinates_2(int *p_x_2, int *p_y_2);
void calculate_slope(double *slope, int *y_2, int *x_2, int *y, int *x);
void display_two_point(int *p_x, int *p_y, int *p_x_2, int *p_y_2);
void display_slope_intercept(double *slope, int *p_x, int *p_y);
void get_slope(double *slope);
void display_point_slope(double *slope, int *p_x, int *p_y);
///////////////////////////////////////////////////////////////////////////////////////////////////
#endif