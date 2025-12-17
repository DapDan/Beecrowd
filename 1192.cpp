#include <iostream>
using namespace std;

int main() {
    int n, i, res, a, b;
    string linha;

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> linha;

        a = linha[0] - '0';
        b = linha[2] - '0';

        if(a == b)
            res = a * b;
        else {
            if(isupper(linha[1]))
                res = b - a;
            else
                res = a + b;
        }

        cout << res << "\n";
    }

    return 0;
}
