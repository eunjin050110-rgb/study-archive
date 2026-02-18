#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, avg; cin >> n >> avg;
    cout << 2 * avg - n << "\n";

    return 0;
}
