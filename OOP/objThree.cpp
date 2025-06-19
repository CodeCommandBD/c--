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
};

int main()
{
    student shanto, kumar;

    shanto.id = 150;
    shanto.gpa = 3.45;
    shanto.dis();

    kumar.id = 100;
    kumar.gpa = 4.45;
    kumar.dis();
    
}