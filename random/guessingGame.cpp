#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    while (1)
    {
        int n;
        cout << "Enter your guess between 1 to 5 : ";
        cin >> n;

        int rendom = 1 + rand() % 5;

        if (n == rendom)
        {
            cout << "You have won" <<endl <<endl;
        }
        else
        {
            cout << "You have lost." << endl;
            cout << "Random number was " << rendom <<endl <<endl;
        }
    }
}
