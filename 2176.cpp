#include <iostream>
using namespace std;

int main() {
    string s;
    int i, count;

    cin >> s;
    count = 0;
    for(char c : s) {
        if(c == '1')
            count++;
    }

    if(count % 2 == 0)
        s += '0';
    else
        s += '1';

    cout << s << "\n";

    return 0;
}
