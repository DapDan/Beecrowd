#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i, j, n, s, hit;

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> s;

        vector<int> vet(s);
        for(j = 0; j < s; j++) {
            cin >> vet[j];
        }

        string input;
        cin >> input;

        hit = 0;
        for(j = 0; j < s; j++) {
            if(input[j] == 'J' && vet[j] > 2)
                hit++;
            else if(input[j] == 'S' && vet[j] <= 2)
                hit++;
        }

        cout << hit << "\n";
    }

    return 0;
}
