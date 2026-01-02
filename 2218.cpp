#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        int res = (n * (n + 1)) / 2 + 1;
        cout << res << endl;
    }

    return 0;
}
