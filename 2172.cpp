#include <iostream>
using namespace std;

int main() {
    int n, m, res;

    while(cin >> n >> m) {
        if(n == 0 && m == 0)
            break;

        res = n * m;

        cout << res << "\n";
    }
    
    return 0;
}
