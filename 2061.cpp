#include <iostream>
using namespace std;

int main(){
    int n, m, i, total;
    string action;

    cin >> n >> m;

    total = n;
    for(i = 0; i < m; i++) {
        cin >> action;

        if(action == "fechou")
            total += 1;
        else
            total -= 1;
    }

    printf("%d\n", total);

    return 0;
}
