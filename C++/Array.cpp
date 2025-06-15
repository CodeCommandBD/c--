#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;

    cout<< "Enter number of student : ";
    cin >> n;

    int student[n];

    for(int i=0; i<=n; i++){
        cout<< "Marks for student " << i <<" = ";
        cin>> student[i];
        sum = sum + student[i];
    }

    cout <<"Total : " <<sum <<endl;
    float avg = (float) sum/n;

    cout <<"Avg : " <<avg <<endl;

    int max = student[0];
    int min = student[0];

    for(int i = 1; i<=n; i++){
       if(max < student[i]){
         max = student[i];
       }
       if(min > student[i]){
         min = student[i];
       }
    }
    cout<<"max : " <<max <<endl;
    cout<<"min : " <<min <<endl;
}