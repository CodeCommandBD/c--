#include <iostream>

using namespace std;

double add(double a, double b){
    double sum =  a + b;
    return sum;
}

int main(){
    
    double res =  add(10.5,20.2);
    cout<< res;
}