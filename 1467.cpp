#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    while (cin >> A >> B >> C) {
        if (A == B && A == C)
            cout << "*\n";
        else if (A == B && A != C)
            cout << "C\n";
        else if (A == C && A != B)
            cout << "B\n";
        else if (B == C && B != A)
            cout << "A\n";
    }

    return 0;
}
