#include <iostream>
using namespace std;

int main() {
    int n, i;
    string number;

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> number;

        if(number.length() == 5)
            printf("3\n");
        else {
            if((number[0] == 'o' && number[1] == 'n') || (number[0] == 'o' && number[2] == 'e') || (number[1] == 'n' && number[2] == 'e')) {
                printf("1\n");
            }else {
                printf("2\n");
            }
        }
    }

    return 0;
}
