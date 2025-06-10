// 1 x 2 x 3 x .... x N
// until multiplication 1 to n
// multiplication of even and odd number  

#include <iostream>

using namespace std;

int main(){
    int n , add = 1, count = 0;

    cin>> n;

    for(int i = 2; i<=n; i = i + 2){
        // even odd
        count = count + 1;

        // multi all number
        add = add * i;
    }

    cout << count <<endl;
    cout << add;
}