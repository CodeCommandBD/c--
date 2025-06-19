#include <iostream>

using namespace std;

void dis(int num[], int size){
    for(int i = 0; i<=4; i++){
        cout<< num[i] <<" ";
    }
}

int main()
{
   int num[5] = {5,6,4,8,3};
   dis(num,5);
}