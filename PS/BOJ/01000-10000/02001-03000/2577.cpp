#include<iostream>

using namespace std;

int main() {
    int Mult=1, nums[10]={0,},N,i;
    for(i=0; i<3; i++){
        cin >> N;
        Mult *= N;
    }
    
    while(Mult) {
        nums[Mult%10]++;
        Mult /= 10;
    }

    for (i = 0; i < 10; i++)
         cout << nums[i] << '\n';

}