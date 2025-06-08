#include <iostream>

using namespace std;

int main(){
    int num, sum = 0, remainder;

    cin>> num;

    while (num > 0)
    {
        remainder = num % 10;
        sum = sum*10 + remainder;
        num = num / 10;
    }
    cout<< sum;
    
}