#include <iostream>

using namespace std;

int main(){
    int row, col;
    int  A[3][4];
    int  B[3][4];
    int  C[3][4];
    cout<< "number of row and col : ";
    cin >> row >> col;

    // A matrix input
    cout<< "input A: " <<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"A [" <<i <<"] [" << j << "] " ;
            cin>> A[i][j];
        }
        cout << endl;
    }

    // B matrix input
    cout<< "input B: " <<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"B [" <<i <<"] [" << j << "] " ;
            cin>> B[i][j];
        }
        cout << endl;
    }

    // A matrix output

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"" <<A[i][j] <<" ";
        }
        cout << endl;
    }

    cout << endl;
    // B matrix output
    
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"" <<B[i][j] <<" ";
        }
        cout << endl;
    }

    // A B matrix in C

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
          C[i][j] = A[i][j] + B[i][j];
        }
    }


    // A + B 

    cout << "A + B =" <<endl;
    for(int i = 0; i<row; i++){

        for(int j = 0; j<col; j++){
         cout << C[i][j] << " ";
        }
        cout << endl;
    }

       
}
