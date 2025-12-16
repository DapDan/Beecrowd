#include <iostream>
using namespace std;

int main() {
    int n, num, teste = 0;

    while (cin >> n && n != 0) {
        teste++;
        int winner = 0;

        for (int i = 1; i <= n; i++) {
            cin >> num;
            if (num == i)
                winner = num;
        }

        cout << "Teste " << teste << "\n";
        cout << winner << "\n\n";
    }

    return 0;
}
