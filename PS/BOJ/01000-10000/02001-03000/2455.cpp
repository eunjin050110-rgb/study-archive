#include <iostream>

using namespace std;

int main() {
    int sum = 0, max = 0;
    int in, out;
    for (int i = 0; i < 4; ++i) {
        std::cin >> out >> in;
        sum += (in - out);
        max = std::max(sum, max);
    }
    std::cout << max;

    return 0;
}