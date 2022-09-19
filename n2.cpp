#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int a;
    printf("The angle in degrees = ");
    scanf("%d", &a);
    double b = (a * M_PI)/180;
    printf("The angle in radians = %lf", b);
}