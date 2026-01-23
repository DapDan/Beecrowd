#include <iostream>
using namespace std;

int main() {
    int n, i, num;
    int maior, maior2, idx1, idx2;

    while(1) {
        cin >> n;
        if(n == 0)
            break;

        maior = maior2 = -1;
        idx1 = idx2 = 0;
        for(i = 1; i <= n; i++) {
            cin >> num;

            if(num > maior) {
                maior2 = maior;
                idx2 = idx1;

                maior = num;
                idx1 = i;
            }else if(num > maior2) {
                maior2 = num;
                idx2 = i;
            }
        }

        cout << idx2 << "\n";
    }

    return 0;
}
