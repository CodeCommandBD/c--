
// দশমিক সংখ্যার যোগফল 
#include <iostream>

using namespace std;

int main(){
    int n, sum=0;
    cin>> n;

    for(int i = 1.5; i<=n; i++){
        sum = sum + i;

    }
    cout<< sum;
}