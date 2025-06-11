#include <iostream>

using namespace std;

int main(){
    int n, row, col;

    cin >> n;
    for(row = 1; row<=n; row++){
        for(int col = 1; col <= row; col++){
            cout << row;
        }
        cout <<endl;
    }
}
