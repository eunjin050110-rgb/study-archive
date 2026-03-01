#include <iostream>

using namespace std;

int main() {
    int T, M, n;
    char type, c;
    for (cin >> T; T--; cout << '\n') {
        cin >> M >> type;
        while (M--) {
            if (type == 'C') {
                cin >> c;
                cout << c - 'A' + 1 << " ";
            } else {
                cin >> n;
                cout << (char)(n + 64) << " ";
            }
        }
    }
}