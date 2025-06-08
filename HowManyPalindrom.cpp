#include <iostream>

using namespace std;

int main(){
    int num, sum, remainder, count = 0;
    
    
    

    for( num = 100; num<=200; num++){
        int temp = num;

        sum = 0;

        while (temp > 0)
        {
            remainder = temp % 10;
            sum = sum*10 + remainder;
            temp = temp / 10;
        }
    
        if(num == sum){
            cout<< num <<" is a palindrome" <<endl ;
            count ++;
        }else{
            cout<< num <<"Not Palindrome" <<endl;
        }
    }

    cout << count;
    
}