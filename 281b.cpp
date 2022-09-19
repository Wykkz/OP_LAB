#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cout << "Vvedite a: ";
    cin >> a;
    int aa= a * a;
    int aaa= aa * aa;
    int aaaa= aaa * aaa;
    int aaaaa = aaaa * aa;
    cout << "a^10: " << aaaaa << endl;
}