#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;
    int total = n;
    while (n >= m) {
        n /= m;
        total += n;
    }
    cout << total << "\n";

    return 0;
}