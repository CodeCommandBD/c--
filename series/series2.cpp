#include <iostream>

using namespace std;

int main(){
    int n, sum = 0, a = 1;

    cin>> n;

    cout << (" 1 + 2 +3 .... + ") <<n <<endl;

    while ( a <= n )
    {
        sum = sum + a;
        a = a + 1;
    }
    cout << sum;
}