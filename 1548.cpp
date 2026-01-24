#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, i, j, change;

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> m;

        std::vector<int> original(m);
        std::vector<int> ordenado(m);
        change = 0;
        for(j =  0; j < m; j++) {
            cin >> original[j];
            ordenado[j] = original[j];
        }

        std::sort(ordenado.begin(), ordenado.end(), [](int a, int b) {
            return a > b;
        });

        for(j = 0; j < m; j++) {
            if(original[j] == ordenado[j])
                change++;
        }

        printf("%d\n", change);

    }

    return 0;
}
