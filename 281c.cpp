#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cout << "Vvedite a: ";
    cin >> a;
    int a1= a * a;
    int a2= a1 * a1;
    int a3= a2 * a2;
    int a4= a3 * a2;
    cout << "a^12: " << a4 << endl;
}