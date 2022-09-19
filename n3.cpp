#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int r;
    printf("The radius of the circle = ");
    scanf("%d", &r);
    double S = sqrt(r) + (sqrt((2 * r)) - M_PI * sqrt(r))/4;
    printf("The area of the shaded figure = %lf", S);
}