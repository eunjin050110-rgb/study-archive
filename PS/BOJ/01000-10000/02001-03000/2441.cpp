#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i <num; i++) {
        for (int j = num - i; j <num; j++)
           cout << " ";
        for (int k = i; k < num; k++)
            cout << "*";
        printf("\n");
    }
}