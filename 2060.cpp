#include <iostream>
using namespace std;

int main(){
    int n, l, i, j;
    int divisores[] = {2, 3, 4, 5};
    int cont[4] = {0};

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> l;

        for(j = 0; j < 4; j++) {
            if(l % divisores[j] == 0)
                cont[j]++;
        }
    }

    for (int j = 0; j < 4; j++) {
        printf("%d Multiplo(s) de %d\n", cont[j], divisores[j]);
    }

    return 0;
}
