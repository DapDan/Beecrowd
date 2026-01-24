#include <iostream>
using namespace std;

int main() {
    int n, i, j, QT, S, quess, pos, menor;

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> QT >> S;

        menor = 1000;
        pos = 0;
        for(j = 0; j < QT; j++) {
            cin >> quess;

            if(abs(S - quess) < menor) {
                menor = abs(S - quess);
                pos = j + 1;;
            }
        }

        cout << pos << "\n";
    }

    return 0;
}
