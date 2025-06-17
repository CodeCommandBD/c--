#include <iostream>

using namespace std;

int main(){
    int num[] = {5,6,10,45,2,7};
    int SearchValue = 10;
    int position =  -1;

    for(int i = 0; i<6; i++){
        if(SearchValue == num[i]){
            position = i + 1;
            break;
        }
    }
    if(position == -1){
        cout<< "Not Found";
    }else{
        cout<<"Found";
    }

}
    