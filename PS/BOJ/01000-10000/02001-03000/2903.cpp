#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int side = (1 << N) + 1;

    cout << side * side << endl;

    return 0;
}