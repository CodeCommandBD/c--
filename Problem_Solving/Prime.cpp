#include <iostream>

using namespace std;

int main()
{
    int num, count = 0; 
    cout << "enter number : ";
    cin>> num;

    for(int  i = 2; i<num; i++ ){
        if(num % i == 0 ){
            count = count + 1;
        }
    }
    if(count == 0){
        cout<< num <<" is a Prime number";
    }else{
        cout<< num <<" is not a Prime";
    }
     
}