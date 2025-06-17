#include <iostream>

using namespace std;

int main(){
    
    int  A[3][4];
    int  B[4][4];
    cout<< "input A: " <<endl;
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<"A [" <<i <<"] [" << j << "] " ;
            cin>> A[i][j];
        }
        cout << endl;
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<" A " <<A[i][j] <<" ";
        }
        cout << endl;
    }


    // B matrix
    cout<< "input B: " <<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<"B [" <<i <<"] [" << j << "] " ;
            cin>> B[i][j];
        }
        cout << endl;
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<" B " <<B[i][j] <<" ";
        }
        cout << endl;
    }
       
}
