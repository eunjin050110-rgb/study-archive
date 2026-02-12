#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max_side, sum_others;

    if (a >= b && a >= c) {
        max_side = a;
        sum_others = b+c;
    } else if (b >= a && b >= c) {
        max_side = b;
        sum_others = a+c;
    } else if (c >= a && c >= b) {
        max_side = c;
        sum_others = a+b;
    }
    if (max_side < sum_others) {
        cout << a + b + c;
    } else {
        cout << sum_others + (sum_others -1);
    }
    return 0;


    }

