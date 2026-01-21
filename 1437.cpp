#include <iostream>
using namespace std;

int main() {
    char dir[] = {'N', 'L', 'S', 'O'};
    string command;
    int n, i, indice;

    while(true) {
        cin >> n;
        if(n == 0)
            break;

        cin >> command;
        indice = 0;
        for(i = 0; i < n; i++) {
            if(command[i] == 'D')
                indice = (indice + 1) % 4;
            else if (command[i] == 'E')
                indice = (indice - 1 + 4) % 4;
        }

        cout << dir[indice] << "\n";
    }

    return 0;
}
