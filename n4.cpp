#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int N;
    printf("Enter your 3-digit number = ");
    scanf("%d", &N);
    int M = (N / 100) * (N / 10 % 10) * (N % 10);
    printf("The product of your number's digits = %d", M);
}