#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int pos;
        string str;
        cin >> pos >> str;

        vector<char> v;
        for(int i = 0; i <str.length(); i++) {

        if (i + 1 != pos) {
            v.push_back(str[i]);
        }
    }

    for (int i = 0; i<v.size(); i++) {
        cout << v[i];
    }
    cout <<"\n";
    }

    return 0;
}
        
    