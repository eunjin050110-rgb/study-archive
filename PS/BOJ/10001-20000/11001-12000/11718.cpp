#include <iostream>

using namespace std;

int main() {
    char val[101];

    while (std::cin.getline(val, 101)) {
        std::cout << val << '\n';
    }

    return 0;
}