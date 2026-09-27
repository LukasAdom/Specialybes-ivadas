#include <iostream>

using namespace std;

int main(){
    int amzius = 0;
    cout << "Koks jusu amzius? ";
    cin >> amzius;

    cout << (amzius >= 18 ? "Jus esate pilnametis" : "Jus nesate pilnametis") << endl;
    return 0;
}