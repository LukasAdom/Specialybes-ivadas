#include <iostream>

using namespace std;

int main(){
    int menuo;
    cout << "Koksai dabar menuo? (1-12): ";
    cin >> menuo;

    if(menuo > 12 || menuo < 1) {
        cout << "netinkamas menesio skaicius";
        return 0;
    }

    if(3 <= menuo <= 5) {
        cout << menuo << " priklauso pavasario sezonui" << endl;
    } else if (6 <= menuo <= 8) {
        cout << menuo << " priklauso vasaros sezonui" << endl;
    } else if (9 <= menuo <= 11) {
        cout << menuo << " priklauso rudens sezonui" << endl;
    } else {
        cout << menuo << " priklauso ziemos sezonui" << endl;
    }
    return 0;
}