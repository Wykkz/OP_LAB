#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    char b;
    double a, c, N;
    cout << "Vvedite vyrazhenie: ";
    cin >> a >> b >> c;
    if (b == '+')
    {
        N = a + c;
    }
    else if (b == '-')
    {
        N = a - c;
    }
    else if (b == '*')
    {
        N = a * c;
    }
    else if (b == '/')
    {
        N = a / c;
    }
    
    cout << "Rezultat: " << N << endl;
}