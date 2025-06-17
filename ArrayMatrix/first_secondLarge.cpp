#include <iostream>

using namespace std;

int main()
{

    int num[] = {50, 4, 40, 75, 86};
    int sizeOfArray = sizeof(num) / sizeof(num[0]);

    if (sizeOfArray < 2)
    {
        cout << " atleast 2 element needed";
    }

    int fmax = num[1];
    int lmax = num[0];

    if (num[1] > num[0])
    {
        fmax = num[1];
        lmax = num[0];
    }
    else
    {
        fmax = num[0];
        lmax = num[1];
    }

    for (int i = 2; i <= sizeOfArray; i++)
    {
        if (fmax < num[i])
        {
            fmax = num[i];
            lmax = fmax;
        }
        else if (lmax < num[i] && num[i] != fmax)
        {
            lmax = num[i];
        }
    }
    cout << "fmax : " << fmax << endl;
    cout << "lmax : " << lmax;
}