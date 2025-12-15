#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, i, j, count;

    cin >> n;
    n += 1;

    vector<vector<int>> m(n , vector<int>(n));

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1; j++) {
            count = 0;

            if(m[i][j] == 1)
                count++;
            if(m[i][j + 1] == 1)
                count++;
            if(m[i + 1][j] == 1)
                count++;
            if(m[i + 1][j + 1] == 1)
                count++;

            if(count >= 2)
                printf("S");
            else
                printf("U");
        }
        printf("\n");
    }

    return 0;
}
