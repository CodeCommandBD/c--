//  sum = (1 + 3 + 5 +...) - (2 + 4 + 6 + ... )
// covert to 
// sum = 1 - 2 + 3 - 4 + 5 - 6 + ......
// and total result 
#include <iostream>

using namespace std;

int main(){
    int n, even = 0, odd = 0;
    cin>> n;

    for(int i = 1; i<=n; i++){
        if(i%2 == 0){
            even = even + i;
            cout<< even <<endl;
        }else{
            odd = odd + i;
            cout << odd <<endl;
        }
    }
    cout<< "sum: " << odd - even;
}