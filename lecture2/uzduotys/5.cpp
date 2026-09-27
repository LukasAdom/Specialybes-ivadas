#include <iostream>

using namespace std;

int main(){
    bool arTuriPazymejima = 0, arPilnametis = 0;
    int amzius = 0;

    cout << "Koks jusu amzius ir ar turite pazymejima? ";
    cin >> amzius;
    cin >> arTuriPazymejima;

    arPilnametis = amzius >= 18;

    if (arPilnametis && arTuriPazymejima) {
        cout << "Gali vairuoti" << endl;
    } else if (arPilnametis && !arTuriPazymejima) {
        cout << "Reikia pažymėjimo" << endl;
    } else {
        cout << "Per jaunas vairuoti" << endl;
    }

    return 0;
}