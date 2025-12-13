#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R;
    const double PI = 3.14159;

    cin >> R;

    double A = PI * R * R;

    cout << "A=" << fixed << setprecision(4) << A << endl;

    return 0;
}
