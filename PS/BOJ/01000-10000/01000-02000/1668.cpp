#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> trophies(N);
    for (int i = 0; i < N; i++) {
        cin >> trophies[i];
    }

    int left_count = 0;
    int left_max = 0;
    for (int i = 0; i < N; i++) {
        if (trophies[i] > left_max) {
            left_max = trophies[i];
            left_count++;
        }
    }

    int right_count = 0;
    int right_max = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (trophies[i] > right_max) {
            right_max = trophies[i];
            right_count++;
        }
    }

    cout << left_count << "\n" << right_count << endl;

    return 0;
}