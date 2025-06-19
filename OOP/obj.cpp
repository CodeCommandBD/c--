#include <iostream>

using namespace std;

class student{
   public:
     int id;
     double gpa;
};



int main()
{
    student shanto,kumar;

    shanto.id = 150;
    shanto.gpa = 3.45;
    kumar.id = 100;
    kumar.gpa = 4.45;

    cout<< shanto.id << " "  << shanto.gpa <<endl;
    cout<< kumar.id << " " << kumar.gpa <<endl;
   
}