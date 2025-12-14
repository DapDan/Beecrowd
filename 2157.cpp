#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int c, b, e;
    int i, j;

    cin >> c;

    for(i = 0; i < c; i++) {
        cin >> b >> e;

        std::string seq, inv;

        for(j = b; j <= e; j++)
            seq += std::to_string(j);

        inv = seq;
        std::reverse(inv.begin(), inv.end());

        std::cout << seq << inv << "\n";
    }

    return 0;
}
