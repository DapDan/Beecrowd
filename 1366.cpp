#include <iostream>
using namespace std;

int main() {
    int n, ci, vi, pares, i;
    while(cin >> n) {
        if(n == 0)
            break;

        pares = 0;
        for(i = 0; i < n; i++) {
            cin >> ci >> vi;
            pares += vi / 2;
        }

        pares /= 2;
        cout << pares << "\n";
    }

    return 0;
}
