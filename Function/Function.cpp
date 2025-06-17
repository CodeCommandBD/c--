#include <iostream>

using namespace std;

void add(int a, int b){
    int sum = a + b;
    cout << sum <<endl;
    
}
void sub(int a, int b){
    int sum = a - b;
    cout << sum <<endl;
}
void multi(int a, int b){
    int sum = a * b;
    cout << sum <<endl;
}
void divi(int a, int b){
    float sum = (float) a / b;
    cout << sum <<endl;
}

int main(){
    add(10, 20);
    sub(10, 20);
    multi(10, 20);
    divi(10, 3);
}