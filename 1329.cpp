#include <iostream>
using namespace std;

int main() {
    int n, num;

    while (true) {
        cin >> n;
        if (n == 0)
            break;

        int mary = 0, john = 0;

        for (int i = 0; i < n; i++) {
            cin >> num;
            if (num == 0)
                mary++;
            else if (num == 1)
                john++;
        }

        cout << "Mary won " << mary << " times and John won "
             << john << " times" << endl;
    }

    return 0;
}
