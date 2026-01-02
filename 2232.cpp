#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        int res = 0;
        for (int j = 0; j < n; j++) {
            res += pow(2, j);
        }
        cout << res << endl;
    }

    return 0;
}
