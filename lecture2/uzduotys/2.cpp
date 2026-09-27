#include <iostream>

using namespace std;

int main(){
    double pirkiniuSuma = 0;
    int lojalumoTaskai = 0;
    bool arTaikomaNuolaida = false;

    cout << "Kokia pirkiniu suma? " << endl;
    cin >> pirkiniuSuma;
    cout << "Kiek turite lojalumo tasku? " << endl;
    cin >> lojalumoTaskai;
    
    arTaikomaNuolaida = pirkiniuSuma > 50.0 || lojalumoTaskai > 100;
    cout << (arTaikomaNuolaida ? "Nuolaida taikoma" : "Nuolaida netaikoma") << endl;

    return 0;
}