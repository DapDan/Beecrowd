#include <iostream>
using namespace std;

int main() {
    int a;

    while(cin >> a) {
        if(a % 6 == 0)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
