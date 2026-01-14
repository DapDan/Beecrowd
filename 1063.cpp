#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n, i, j, k, flag;
    std::stack<int> pilha;

    while(cin >> n && n != 0) {
        while(!pilha.empty())
            pilha.pop();

        std::vector<char> entrada(n);
        std::vector<char> saida(n);
        std::vector<char> output(100);

        for(i = 0; i < n; i++)
            cin >> entrada[i];

        for(i = 0; i < n; i++)
            cin >> saida[i];

        i = 0; j = 0; k = 0; flag = 0;

        while(i <= n - 1) {
            pilha.push(entrada[i]);
            output[k++] = 'I';
            i++;

            while(!(pilha.empty()) && pilha.top() == saida[j]) {
                pilha.pop();
                output[k++] = 'R';
                j++;
                flag++;
            }
        }

        output[k] = '\0';

        if(flag == n)
            cout << output.data() << "\n";
        else
            cout << output.data() << " Impossible\n";
    }

    return 0;
}
