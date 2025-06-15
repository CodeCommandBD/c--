#include <iostream>

using namespace std;

int main(){
    int a[200], n;

    cout<< "input : ";
    cin>> n;

    for(int i = 1; i<=n; i++){
       cin >> a[i];
    }
    int max = a[1];
    int min = a[1];

    for(int j = 1; j<=n; j++){
       if(max < a[j]){
         max = a[j];
       }else if (min > a[j])
       {
            min = a[j];
       }
       
    }
    cout<<"max : " << max <<endl;
    cout<<"min : " << min;


}