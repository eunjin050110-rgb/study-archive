#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cur = 0, max = 0;
    for (int i = 0; i < 10; i++) {
        int off, ride; cin >> off >> ride;
        cur -= off;
        cur += ride;
        if (cur > max) max = cur;
    }

    cout << max << "\n";

    return 0;
}