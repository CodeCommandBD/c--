// 1 x 2^2 x 3^2 x ... x n^2

// addition all number

#include <iostream>

using namespace std;

int main(){
    int n , add = 1;
    cin >> n;

    for(int i = 1; i<=n; i++){
        add = add * i * i;
    }
    cout<< add;
}