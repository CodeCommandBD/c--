#include <iostream>
#include <stdlib.h>
using namespace std;



int main(){
    for(int i = 1; i<=5; i++){
        int rendom = rand()%5+1;
        cout<< "number " <<rendom <<endl;
    }
}
    
