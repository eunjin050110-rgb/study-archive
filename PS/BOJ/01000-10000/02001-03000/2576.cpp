#include <iostream>

using namespace std;

int main() {
    int sum = 0, num = 0, min = 100;

    for(int i = 0; i < 7; i++) {
        cin >> num;
        if(num % 2 != 0) {
            sum += num;
            if(min > num)
                min = num;
        }
    }

    if(sum != 0)
        cout << sum << '\n' << min;
    else
        cout << -1;
    
    return 0;
}