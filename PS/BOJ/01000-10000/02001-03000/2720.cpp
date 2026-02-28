#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int sum; cin >> sum;

        cout << sum / 25 << " ";
        sum %= 25; 
        cout << sum / 10 << " ";
        sum %= 10;
        cout << sum / 5 << " ";
        sum %= 5;
        cout << sum / 1 << "\n";
    }

    return 0;
}