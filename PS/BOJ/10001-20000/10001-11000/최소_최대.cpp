#include <iostream>

using namespace std;

int main() {
    
    int t;
    int a;

    cin >> t;

    int min = 1000000, max = -1000000;

    for (int i = 0; i < t; i++) {
        cin >> a;
        if (max < a) max = a;
        if (min > a) min = a;
    }

    cout << min << ' ' << max;

    return 0;
    
} 
