#ifndef AREA_H
#define AREA_H

#include<iostream>
#include<cmath>

using namespace std;
const double PI = 3.14159;

double area(double radius = 0);
double area(double length, double height);
double area(double bottom, double top, double height);
double area(double edge1, double edge2, double edge3, int);

#endif