#include <iostream>

using namespace std;

int main()
{
    int f[5][5], s[5][5], res[5][5],sum=0, row1, row2, col1, col2;

    cout << "Enter firstMatrix row and col : ";
    cin >> row1 >> col1;

    cout << "Enter secondMatrix row and col : ";
    cin >> row2 >> col2;

    while (col1 != row2)
    {
        cout << "Error Column of first matrix not equal";

        cout << "Enter firstMatrix row and col : ";
        cin >> row1 >> col1;

        cout << "Enter secondMatrix row and col : ";
        cin >> row2 >> col2;
    }

    //  first matrix 
    for(int i = 0;i< row1; i++){
        cout<< "first matrix ";
        for(int j = 0; j<col1; j++){
            cin>> f[i][j];
        }
    }
    cout<< endl;
    //  second matrix 
    for(int i = 0;i< row1; i++){
        cout<< "second matrix " ;
        for(int j = 0; j<col1; j++){
            cin>> s[i][j];
        }
    }
    cout<< endl;

    // first second multi 
    for(int i = 0;i< row1; i++){
        cout<< "second matrix " ;
        for(int j = 0; j<col2; j++){
            for(int k = 0; k<col1; k++){
                sum = sum + f[i][k] * s[k][j];
            }
            res[i][j] = sum;
            sum = 0;
        }
    }
    cout<< endl;


    // print 
    cout<< "first matrix " <<endl;
     for(int i = 0;i< row1; i++){
        for(int j = 0; j<col1; j++){
            cout<< f[i][j];
        }
        cout<< endl;
    }
    cout<< endl;
    // print 
    cout<< "second matrix " <<endl;
     for(int i = 0;i< row1; i++){
        for(int j = 0; j<col1; j++){
            cout<< s[i][j];
        }
        cout<< endl;
    }

    // multipied
    cout<< "first and second multiplied " <<endl;
     for(int i = 0;i< row1; i++){
        for(int j = 0; j<col2; j++){
            cout<< res[i][j];
        }
        cout<< endl;
    }


}