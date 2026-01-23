#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    double A, B, C;

    cin >> A >> B >> C;
    double v[] = {A, B, C};
    std::sort(v, v + 3);
    A = v[2], B = v[1], C = v[0];

    if(A >= B + C) {
        cout << "NAO FORMA TRIANGULO\n";
    }else {
        if(A * A == B * B + C * C)
            cout << "TRIANGULO RETANGULO\n";
        else if(A * A > B * B + C * C)
            cout << "TRIANGULO OBTUSANGULO\n";
        else
            cout << "TRIANGULO ACUTANGULO\n";

        if(A == B && A == C)
            cout << "TRIANGULO EQUILATERO\n";
        else if(A == B || B == C|| A == C)
            cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}
