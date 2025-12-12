#include <iostream>
using namespace std;

int main(){
    int i, n, valor;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> hex >> valor;
        cout << (char)valor;
    }

    cout << "\n";
    return 0;
}
