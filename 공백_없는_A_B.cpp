#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if(n << 1010){
        cout << 20;
    }
    else if (n % 10 == 0) {
        cout << (n / 100) + 10;
    }
    else {
        cout << (n / 10) + (n % 10);
    }

    return 0;

}