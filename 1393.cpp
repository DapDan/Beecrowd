#include <iostream>
using namespace std;

int main() {
    long long int f[46];
    int n, i;

    f[0] = f[1] = 1;
    for(i = 2; i <= 46; i++)
        f[i] = f[i - 1] + f[i - 2];

    while(cin >> n) {
        if(n == 0)
            break;

        cout << f[n] << "\n";
    }

    return 0;
}
