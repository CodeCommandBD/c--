#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    int number[] = {20, 30, 100, -5, 80};
    int searchNumber = 20;
    int found = -1;

    for (int i = 0; i < 5; i++)
    {
        if (number[i] == searchNumber)
        {
            found = i;
            break;
        }
    }
    if(found == -1){
        cout<< "Not found";
    }else{
        cout << searchNumber  <<" is founded" ;
    }
}