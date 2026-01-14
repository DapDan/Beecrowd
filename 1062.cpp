#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    std::stack<int> pilha;

    int n, i, j, flag;
    while(cin >> n && n != 0) {
        while(1) {
            while(!pilha.empty()) pilha.pop(); // limpa a pilha
            
            std::vector<int> entrada(n);
            std::vector<int> saida(n);

            cin >> entrada[0];
            if(entrada[0] == 0)
                break;

            for(i = 1; i < n; i++)
                cin >> entrada[i];

            for(i = 0; i < n; i++)
                saida[i] = i + 1;

            i = j = n - 1;
            flag = 0;
            while (1) {
                if ((i >= 0 && j >= 0) && entrada[i] == saida[j]) {
                    i--; j--; flag++;
                }
                else if (!(pilha.empty()) && pilha.top() == saida[j] && j >= 0) {
                    pilha.pop();
                    j--; flag++;
                }
                else if ((i >= 0 && j >= 0) && entrada[i] != saida[j]) {
                    pilha.push(entrada[i]);
                    i--;
                }
                else {
                    break;
                }
            }

            if (flag == n)
                printf("Yes\n");
            else
                printf("No\n");
        }

        printf("\n");
    }

    return 0;
}
