#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        vector<string> books(N);

        for (int i = 0; i < N; i++) {
            cin >> books[i];
        }

        sort(books.begin(), books.end());

        for (auto &b : books) {
            cout << b << "\n";
        }
    }
    return 0;
}
