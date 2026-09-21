#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 1.
    string vardas;
    int amzius;
    cout << "Parasykite varda ir armziu: \n";
    cin >> vardas >> amzius;

    cout << vardas << " po 10 metu bus:" << amzius + 10 << endl;

    // 2.
    int ilgis, plotis;
    cout << "Iveskite staciakampio ilgi ir ploti: \n";
    cin >> ilgis >> plotis;
    cout << "Plotas: " << ilgis*plotis << " Perimetras" << ilgis*2 + plotis*2 << endl;

    // 3.
    double kaina;
    double nuolaida;
    cout << "Iveskite prekes kaina ir nuolaida: \n";
    cin >> kaina >> nuolaida;
    double paskutineKaina = kaina * (1.0f - nuolaida / 100);
    cout << paskutineKaina;

    // 4.
    int saldainiai, dezesTalpa;
    cout << "Kiek turite saldainiu ir kiek i 1 deze telpa saldainiu: \n";
    cin >> saldainiai >> dezesTalpa;
    cout << "Reikia " << saldainiai / dezesTalpa + 1 << " deziu. \n";

    return 0;
}