#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string principal, secundario;
        cin >> principal >> secundario;

        if (secundario.size() > principal.size()) {
            cout << "nao encaixa\n";
        } else {
            string finalPrincipal = principal.substr(principal.size() - secundario.size());

            if (finalPrincipal == secundario)
                cout << "encaixa\n";
            else
                cout << "nao encaixa\n";
        }
    }

    return 0;
}
