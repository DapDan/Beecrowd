#include <cstdint>
#include <iostream>
using namespace std;

int main() {
    uint32_t a, b, res;
    while(cin >> a >> b) {
        res = a ^ b;
        cout << res << "\n";
    }

    return 0;
}
