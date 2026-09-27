#include <iostream>

using namespace std;

int main(){
    bool galiIeiti = 0, turiBilieta = 0, yraPilnametis = 0, perejoSaugumoPatikra = 0, turiVIP = 0;
    cout << "Ar turi bilieta 0|1: " << endl;
    cin >> turiBilieta;
    cout << "Ar yra pilnametis 0|1" << endl;
    cin >> yraPilnametis;
    cout << "Ar turi VIP bilieta 0|1" << endl;
    cin >> turiVIP;
    cout << "Ar pereijo saugumo patikrinima 0|1" << endl;
    cin >> perejoSaugumoPatikra; 

    galiIeiti = turiBilieta && yraPilnametis && (perejoSaugumoPatikra || turiVIP);

    cout << galiIeiti;
    return 0;
}