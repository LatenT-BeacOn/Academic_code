#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int id;
    double cg;
    // counstructor:it has same name if the class it belongs;and etar kono return type thakbena
    student(int x, double y)
    {
        id=x;       
        cg=y;
    }
    void display()
    {
        
        cout<<id<<" "<<cg<<'\n';
    }
};

int main()
{
    student atik(10,3.01),asik(2,3.35);
    atik.display();
    asik.display();
    
    
}