#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int H,R;
    printf("Enter the height and radius \n");
    scanf("%d", &H);
    scanf("%d", &R);
    double c = 2 * M_PI * R * H;
    printf("Volume of the cylinder = %lf \n", c);
    double d = (M_PI * (R * R)) + (M_PI * R);
    printf("Volume of the cone = %lf", d);
}