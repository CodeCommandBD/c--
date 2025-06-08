#include <iostream>

using namespace std;

int main()
{
    int num1, count = 0, totalPrime = 0, primeSum=0;
    // cin >> num1;

    for ( num1 = 0; num1 <= 10; num1++)
    {
        count = 0;
        if (num1 <= 1)
        {
            count++;
        }
        else
        {
            for (int i = 2; i < num1; i++)
            {
                if (num1 % i == 0)
                {
                    count++;
                    break;
                }
            }
            if (count == 0)
            {
                cout << "Prime: " << num1 <<endl;
                totalPrime ++;
                primeSum = primeSum + num1;
            }
            
        }
    }
    cout << "Total Prime : " << totalPrime <<endl;
    cout << "Prime Sum: " << primeSum <<endl;
}