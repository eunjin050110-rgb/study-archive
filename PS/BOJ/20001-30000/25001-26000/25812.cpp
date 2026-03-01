#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r;
    cin >> n >> r;

    int fixed_count = 0;
    int double_count = 0;

    for (int i = 0; i < n; i++) {
        int salary;
        cin >> salary;

        if (r > salary) {
            fixed_count++;
        } else if (salary > r) {
            double_count++;
        }
    }

    if (fixed_count > double_count) cout << 1;
    else if (double_count > fixed_count) cout << 2;
    else cout << 0;

    return 0;
}