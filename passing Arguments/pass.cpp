#include <iostream>

using namespace std;

void dis(int *num){
    *num = 20;
}

int main()
{
    int x = 10;
    cout<< x;

    dis(&x);
    cout<< x;
}