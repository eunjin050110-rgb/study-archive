#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int l, w, a;
        if (!(cin >> l >> w >> a)) 
        break;
        if (l == 0 && w == 0 && a == 0)
        break;

        if (l == 0) l = a / w;
        else if (w == 0) w = a / l;
        else if (a == 0) a = l * w;

        cout << l << " " << w << " " << a << "\n";
    }

    return 0;
}