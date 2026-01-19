#include <iostream>
using namespace std;

int josephus(int n, int k) {
    if (n == 1)
        return 1;
    return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main() {
    int tam, i, n, k, res;

    cin >> tam;
    for(i = 0; i < tam; i++) {
        cin >> n >> k;

        res = josephus(n, k);
        cout << "Case " << i + 1 << ": "<< res << "\n";
    }

    return 0;
}
