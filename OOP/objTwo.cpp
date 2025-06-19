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
    void value(int x, double y){
        id = x;
        gpa = y;
    }
};

int main()
{
    student shanto, kumar;

    shanto.value(101, 3.50);
    shanto.dis();

    kumar.value(105, 4.50);
    kumar.dis();
    
}