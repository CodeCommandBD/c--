#include <iostream>

using namespace std;

int main(){
   int a[20], n;
   int sum = 0;

   cout << "input : " <<endl;
   cin >> n;
   for(int i= 0 ; i<n; i++){
    cout<< "a [" << i <<"] = ";
    cin >> a[i];
   }
   for(int i= 0 ; i<n; i++){
    sum = sum + a[i];
   }
   cout <<"sum : " <<sum <<endl;
   int avg = (float) sum / n;
   cout << "avg : " << avg;
}