#include <iostream>
#include <vector>

using namespace std;

int N;

int main() {
    cin.tie(0);
    cout.tie(0);
    while(1) {
        cin >> N;
        if(N == 0) break;
        int sum = 0;
        for(int i = 1; i <= N; i++) sum += i;
        cout << sum << "\n";
    }

    return 0;
}
