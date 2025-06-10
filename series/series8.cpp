// 1 + 1/2 + 1/3 + .... + 1/n;
// sum of number 
// print same to same input in output
#include <iostream>

using namespace std;

int main(){
    double n, sum = 0;

    cin >> n;

    for(int i=1; i<=n; i++){
        
        sum = sum + i * i;
         
        if (i == 1) {
            cout << "1";
        } else if (i == n) {
            cout << " + ..... + 1/n" <<endl;
        } else {
            cout << " + 1/" << i;
        }
    }

    cout << sum <<endl;

    
}