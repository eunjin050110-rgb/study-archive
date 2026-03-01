#include <iostream>

using namespace std;

int main() {
    int val, maxVal = -1, row = 1, col = 1;

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cin >> val;
            if (val > maxVal) {
                maxVal = val;
                row = i;
                col = j;
            }
        }
    }

    cout << maxVal << "\n" << row << " " << col;

    return 0;
}