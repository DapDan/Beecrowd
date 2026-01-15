#include <iostream>
#include <vector>
using namespace std;

int main() {
    string entrada;
    int balance, correct, i;

    while(cin >> entrada) {
        balance = 0;
        correct = 1;

        for(i = 0; entrada[i] != '\0'; i++) {
            if(entrada[i] == '(')
                balance++;
            else if(entrada[i] == ')') {
                balance--;
                if(balance < 0) {
                    correct = 0;
                    break;
                }
            }
        }

        if(balance != 0)
            correct = 0;

        if(correct == 1)
            cout << "correct\n";
        else
            cout << "incorrect\n";
    }


    return 0;
}
