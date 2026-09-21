#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // 4. Atstumas tarp taškų — rask ir ištaisyk klaidas
    int x1, y1, x2, y2;
    cout << "Iveskite pirmo tasko koordinates (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Iveskite antro tasko koordinates (x2 y2): ";
    cin >> x2 >> y2;

    // int -> double
    double atstumas = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Atstumas tarp tasku yra: " << atstumas << endl;
    return 0;
}