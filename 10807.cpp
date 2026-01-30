#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, v;
    int count = 0;

  
    cin >> n;

    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    
    cin >> v;

   
    for (int i = 0; i < n; i++) {
        if (nums[i] == v) {
            count++;
        }
    }

  
    cout << count << "\n";

    return 0;
}