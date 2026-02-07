#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> numbers(N);

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    int v;
    cin >> v;

    int count = 0;

    for (int i = 0; i < N; i++) {
        if (numbers[i] == v) {
            count++;
        }
    }

    cout << count << "\n";
    
    return 0;
}