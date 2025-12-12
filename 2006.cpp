#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, i, count;
    vector<int> v(5);

    cin >> n;

    count = 0;
    for(i = 0; i < 5; i++) {
        cin >> v[i];

        if(v[i] == n)
            count++;
    }

    cout << count << "\n";

    return 0;
}
