#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // 5. Sekundės į minutes ir sekundes — pagerink kodo skaitomumą.

    int visosSekundes;
    cout << "iveskite sekundes: ";
    cin >> visosSekundes;
    int minutes = visosSekundes / 60;
    int sekundes = visosSekundes % 60;
    cout << minutes << " min " << sekundes << " sek" << endl;
    
    return 0;
}