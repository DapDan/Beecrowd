#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cin >> M >> N;

    unordered_map<string, long long> dict;

    for (int i = 0; i < M; i++) {
        string w;
        long long v;
        cin >> w >> v;
        dict[w] = v;
    }

    string line;
    getline(cin, line);

    for (int i = 0; i < N; i++) {
        long long total = 0;

        while (true) {
            getline(cin, line);
            if (line == ".") break;

            stringstream ss(line);
            string word;
            while (ss >> word) {
                total += dict[word];
            }
        }

        cout << total << "\n";
    }

    return 0;
}
