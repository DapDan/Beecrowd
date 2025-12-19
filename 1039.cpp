#include <iostream>
using namespace std;

int main() {
    int r1, x1, y1, r2, x2, y2;
    int dx, dy, dist, diffRaio;

    while(cin >> r1  >> x1 >> y1 >> r2 >> x2 >> y2) {
        dx = (x2 - x1);
        dy = (y2 - y1);

        dist = (dx * dx) + (dy * dy);
        diffRaio = r1 - r2;

        if(diffRaio >= 0 && dist <= diffRaio * diffRaio)
            cout << "RICO\n";
        else
            cout << "MORTO\n";
    }


    return 0;
}
