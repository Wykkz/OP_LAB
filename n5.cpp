#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x, N;
    cout << "Vvedite x: ";
    cin >> x;
    N = x * (x * (x * (2 * x - 4) + 1) + 3) + 2;
    cout << "N: " << N << endl;
}