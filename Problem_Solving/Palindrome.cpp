#include <iostream>

using namespace std;

int main(){
    int num, sum = 0, remainder, temp;
    
    cin>> num;
    
    temp = num;
    while (temp > 0)
    {
        remainder = temp % 10;
        sum = sum*10 + remainder;
        temp = temp / 10;
    }

    if(num == sum){
        cout<< "Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
    
}