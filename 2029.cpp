#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    double v, d, h, r, area;
    while(cin >> v >> d) {
        r = d / 2.0;
        h = v / (3.14 * r * r);
        cout << "ALTURA = " << fixed << setprecision(2) << h << "\n";

        area = 3.14 * r * r;
        cout << "AREA = " << fixed << setprecision(2) << area << "\n";
    }

    return 0;
}
