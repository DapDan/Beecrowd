#include <iostream>
using namespace std;

int main(){
    int n, i, sum, num, count;

    while (cin >> n) {
        if(n == -1)
            break;

        sum = count = 0;

        for(i = 0; i < n; i++) {
            cin >> num;
            sum += num;

            if(sum % 100 == 0) {
                sum = 0;
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
