#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale (0, " ");
    int a, b, c, d, e, f;
    cout << "Vvedite x1: ";
    cin >> a;
    cout << "Vvedite y1: ";
    cin >> b;
    cout << "Vvedite x2: ";
    cin >> c;
    cout << "Vvedite y2: ";
    cin >> d;
    cout << "Vvedite x3: ";
    cin >> e;
    cout << "Vvedite y3: ";
    cin >> f;
    int x4 = e - (c - a);
    int y4 = f - (d - b);
    cout << "Summa x4: " << x4 <<endl;
    cout << "Summa y4: " << y4 <<endl;
}