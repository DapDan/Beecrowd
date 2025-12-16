#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i, count, proximo, anterior;
    while(cin >> n) {
        if(n == 0)
            break;

        vector<int> v(n);
        for(i = 0; i < n; i++) {
            cin >> v[i];
        }

        count = 0;
        for(i = 0; i < n; i++) {
            anterior = v[(i - 1 + n) % n];
            proximo = v[(i + 1) % n];

            if((v[i] > anterior && v[i] > proximo) || (v[i] < anterior && v[i] < proximo)){
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
