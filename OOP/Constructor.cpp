#include <iostream>

using namespace std;

class student
{
public:
    int id;
    double gpa;

    void dis()
    {
        cout << id << " " << gpa <<endl;
    }
    
    // constructor 
    student(int x, double y){
        id = x;
        gpa = y;
    }
};

int main()
{
    student shanto(101, 3.50);
    shanto.dis();

    student kumar(105, 4.50);
    kumar.dis();
    
}