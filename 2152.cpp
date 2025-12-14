#include <iostream>
using namespace std;

int main(){
    int n, i;
    int h, m, o;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> h >> m >> o;

        if(o == 1)
            printf("%02d:%02d - A porta abriu!\n", h, m);
        else
            printf("%02d:%02d - A porta fechou!\n", h, m);
    }

    return 0;
}
