// 1^2 + 2^2 + 3^2 + .... + n^2
// OR 
// 1^3 + 2^3 + 3^3 + .... + n^3
//  sum of number 
#include <iostream>

using namespace std;

int main(){
    int n , sum = 0;
    cin>> n;

    for(int i = 1; i<=n; i++){
        sum = sum + i*i;
    }
    cout<< sum;
}