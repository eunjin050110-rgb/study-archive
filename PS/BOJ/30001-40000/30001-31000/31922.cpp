#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, p, c; cin >> a >> p >> c;

    cout << max(p, a + c) << "\n";

    return 0;
}