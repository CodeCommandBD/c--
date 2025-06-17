#include <iostream>

using namespace std;

int main(){
   int num1 = 5;
   int num2 = 6;
    int sum = 0;

   int *p1;
   int *p2;

   p1 = &num1;
   p2 = &num2;

    sum = *p1 + *p2;
    cout << sum;
}