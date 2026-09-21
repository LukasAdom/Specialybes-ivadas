#include <iostream>

using namespace std;

int main() {
    char vagonoKlase; // 'E' -> ekonomine, 'V' -> verslo, 'P' -> pirma
    char keleivioTipas; // 'S' -> Studentas, 'J' -> senjoras, 'U" -> suages

    cin >> vagonoKlase >> keleivioTipas;

    bool arGaunaNuolaida = (keleivioTipas == 'S' || keleivioTipas == 'J') && vagonoKlase == 'E';

    if (arGaunaNuolaida){
        cout << "Keleivis gauna nuolaida" << endl;
    } else {
        cout << "Negauna nuolaidos" << endl;
    }

    char marsrutas; // K -> kaunas, V -> vilnius, L -> klaipeda
    int atstumasKm; // K- 100km, V -> 150km, L - 300km

    cin >> marsrutas;

    switch (marsrutas){
    case 'K':
        atstumasKm = 100;
        break;
    case 'V':
        atstumasKm = 150;
        break;
    case 'L':
        atstumasKm = 300;
        break;
        
    default:
        cout << "Netinkamas marsrutas" << endl;
        atstumasKm = 0;
        break;
    }
    
    cout << "Keliones atstumas: " << atstumasKm << endl;

    double kaina = atstumasKm * 0.1;
    if (atstumasKm > 150) kaina += 3.0;

    cout << kaina << endl;

    return 0;
}