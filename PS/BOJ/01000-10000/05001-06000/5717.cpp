#include <iostream>

using namespace std;

int main() {
    int M = 0;
    int F = 0;
    cin >> M >> F;
    while (M + F != 0) {
        cout << M + F << endl;
        cin  >> M >> F;
    }

    return 0;
}