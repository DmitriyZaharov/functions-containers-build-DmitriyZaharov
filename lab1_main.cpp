#include <iostream>
using namespace std;

int Factorial(int x)
{
    int res = 1, n = 1;
    while (n <= x) res*=n++;
    return res;
}

int main()
{
    int z = 0;
    cout << "Vvedite shislo dlya vishisleniya faktoriala: "; cin >> z;
    if (z <=0 ) {cout << "Wrong request!" << endl; return -1;}
    cout << "Faktorial dlya shisla " << z << " = " << Factorial(z) << endl;
    return 0;
}

