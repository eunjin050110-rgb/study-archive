#include <iostream>

using namespace std;

int main() {
    int N = 0;

    cin >> N;

    while(N--){
        for(int i = 0; i <= N; i++)
           cout << "*";
        cout << '\n';
    }

    return 0;
}