// 1 + 2 + 3+ .... + N;
// Total sum of number;
#include <iostream>

using namespace std;

int main(){
    int num, sum= 0 , count = 0;
    cin>> num;

    for(int i =2; i<=num; i = i+2){ 
        count = count + 1;
        sum = sum + i;
    }
    
    cout<<"odd Number: " << count <<endl;
    cout <<"odd Number Sum: " <<sum;
}