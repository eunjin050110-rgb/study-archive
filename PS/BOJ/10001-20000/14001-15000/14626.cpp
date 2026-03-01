#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;
    int sum = 0, target;

    for (int i = 0; i < 13; i++) {
        if (s[i] == '*') target = i;
        else sum += (s[i] - '0') * (i % 2 ? 3 : 1);
    }

    for (int i = 0; i < 10; i++) {
        if ((sum + i * (target % 2 ? 3 : 1)) % 10 == 0) {
            cout << i; 
            break;
        }
    }
}