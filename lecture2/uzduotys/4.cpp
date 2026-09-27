#include <iostream>

using namespace std;

int main(){
    double suma = 0;
    cout << "Kokia daiku suma? ";
    cin >> suma;
    
    if (suma > 30){
        cout << "Nemokamas pristatymas." << endl;
    }
    if (suma > 50)
    {
        cout << "Dovana prie uzsakymo." << endl;
    }
    if (suma > 100)
    {
        cout << "Papildoma 10% nuolaida sekanciam pirkiniui." << endl;
    }

    return 0;
}