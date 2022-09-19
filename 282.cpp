#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double n, r, a, P;
    cout <<"Vvedite n, r: ";
    cin>> n >> r;
    a = tan(M_PI/n) * r * 2;
    P = a * n;
    cout << "P: " << P << endl;
}