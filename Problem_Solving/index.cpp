#include <iostream>
using namespace std;
int main()
{

    int num1, count = 0, totalPrimeNumber=0, sum=0, n, m;
    cin>> n >> m;
    for ( num1 = n; num1 <= m; num1++)
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
                cout << num1 <<endl;
                totalPrimeNumber++;
                sum = sum + num1;
            }
        }
    }
    cout <<"total: " << totalPrimeNumber <<endl;
    cout <<"primeSum: " << sum;
}
