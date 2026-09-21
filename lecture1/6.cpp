#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // 6.  Kūno masės indeksas (KMI)

    double svoris, ugis;
    cout << "Iveskite savo svori (kg) ir ugi (m): \n";
    cin >> svoris >> ugis;
    const double KMI = svoris / pow(ugis, 2);
    cout << "Jusu KMI yra: " << KMI << endl;
    return 0;
}